#include "SlidingMenuLayer.h"
#include <cmath>

USING_NS_CC;

SlidingMenuLayer* SlidingMenuLayer::create()
{
    SlidingMenuLayer *pRet = new SlidingMenuLayer();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        delete pRet;
        pRet = NULL;
        return NULL;
    }
}

bool SlidingMenuLayer::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    pScreenSize = Director::getInstance()->getWinSize();
    generalscalefactor = pScreenSize.height / 500 ;
    
    scrollView = cocos2d::extension::ScrollView::create(Size::ZERO);
    scrollView->setBounceable(true);
    scrollView->setClippingToBounds(true);
    scrollView->setDirection(cocos2d::extension::ScrollView::Direction::HORIZONTAL);
    this->addChild(scrollView, 218, SCROLLVIEW_TAG);
    
    Sprite* tilebox = Sprite::createWithSpriteFrameName("menu_bg.png");
    float newWidth = tilebox->getContentSize().width;
    //tilescale = 1.5f * generalscalefactor ;
    for (int i=0 ; i < 10 ; i++){
        
        
        std::stringstream ss;
        ss << "Game, N " << i;
        
        auto item = SlidingMenuItem::create(ss.str(), i);
        item->setPosition(Vec2(i * newWidth + 30, pScreenSize.height/2 - (tilebox->getContentSize().height *tilescale)/2.0f));
        scrollView->addChild(item, 1, i);
    }
    
    scrollView->setViewSize(Size(pScreenSize.width, pScreenSize.height ));
    scrollView->setContentSize(Size((newWidth + 30)* (10 + 1), pScreenSize.height ));
    
    auto listener = EventListenerTouchAllAtOnce::create();
    listener->onTouchesEnded = CC_CALLBACK_2(SlidingMenuLayer::onTouchesEnded, this);
    this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);

    return true;
}

void SlidingMenuLayer::onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event) {
    Rect spritePos;
    
    if (touches.size() > 0) {
    
        Touch* touch = touches.at(0);
    
        endlocation = Director::getInstance()->convertToGL(touch->getLocation());
    
        if (abs(startlocation.x - endlocation.x) > 5){
            cocos2d::extension::ScrollView* tilesNode = (cocos2d::extension::ScrollView*) this->getChildByTag(SCROLLVIEW_TAG);
            
            Node *container = (Node *)(tilesNode->getChildren().at(0)) ;
            
            for (int i = 0 ; i < container->getChildren().size() ; i++){
                SlidingMenuItem *backsprite = (SlidingMenuItem *)container->getChildByTag(i);
                spritePos = Rect(
                                    (backsprite->getPosition().x + container->getPosition().x ) ,
                                    backsprite->getPosition().y ,
                                    backsprite->getContentSize().width ,
                                    backsprite->getContentSize().height );
                
                if(spritePos.containsPoint(endlocation)){
                    CCLOG("clicked %i", i);
                    backsprite->itemClick();
                    
                    return;
                }
            }
        }
    }

}