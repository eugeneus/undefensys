#include "SlidingMenuLayer.h"
#include <cmath>

USING_NS_CC;

SlidingMenuLayer* SlidingMenuLayer::create(int rowsCount, bool isVertical)
{
    SlidingMenuLayer *pRet = new SlidingMenuLayer();
    if (pRet && pRet->init(rowsCount, isVertical))
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

bool SlidingMenuLayer::init(int pRowsCount, bool pIsVertical)
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    isVertical = pIsVertical;
    rowsCount = pRowsCount;
    int itemsCount = 10;
    
    pScreenSize = Director::getInstance()->getWinSize();
    generalscalefactor = pScreenSize.height / 500 ;
    
    scrollView = cocos2d::extension::ScrollView::create(Size::ZERO);
    scrollView->setBounceable(true);
    scrollView->setClippingToBounds(true);
    scrollView->setDirection(isVertical ?  cocos2d::extension::ScrollView::Direction::VERTICAL : cocos2d::extension::ScrollView::Direction::HORIZONTAL);
    this->addChild(scrollView, 218, SCROLLVIEW_TAG);
    
    Sprite* tilebox = Sprite::createWithSpriteFrameName("menu_bg.png");
    float itemLength = isVertical ? tilebox->getContentSize().height : tilebox->getContentSize().width;
    
    
    int colsCount = rowsCount > 1 ? itemsCount/rowsCount : 1;
    
    
    for (int i=0 ; i < 10 ; i++){
        std::stringstream ss;
        ss << "Game, N " << i;
        
        auto item = SlidingMenuItem::create(ss.str(), i);
        
        float itemPositionSideTmp = i * itemLength + 30 + itemLength/2;
        float itemPositionSide = isVertical ? pScreenSize.height - itemPositionSideTmp : itemPositionSideTmp;
        
        
        Vec2 position = isVertical ? Vec2(pScreenSize.width/2 - (tilebox->getContentSize().width *tilescale)/2.0f, itemPositionSide) : Vec2(itemPositionSide, pScreenSize.height/2 - (tilebox->getContentSize().height *tilescale)/2.0f);
        
        item->setPosition(position);
        scrollView->addChild(item, 1, i);
    }
    
    scrollView->setViewSize(Size(pScreenSize.width, pScreenSize.height ));
    Size scrollContentSize = isVertical ? Size(pScreenSize.width, (itemLength + 30) * 10) : Size((itemLength + 30)* 10, pScreenSize.height);
    scrollView->setContentSize(scrollContentSize);
    
  //  if (isVertical)  scrollView->setPosition(Vec2(scrollContentSize.width/2 , itemLength - scrollContentSize.height/2 * 1.0/(10 + 1)));
    
    
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
                                    (backsprite->getPosition().x + container->getPosition().x) ,
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