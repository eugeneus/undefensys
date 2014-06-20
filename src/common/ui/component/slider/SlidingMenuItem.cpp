#include "SlidingMenuItem.h"

USING_NS_CC;

SlidingMenuItem* SlidingMenuItem::create(const string& labelTxt, int index)
{
    SlidingMenuItem *pRet = new SlidingMenuItem();
    if (pRet && pRet->init(labelTxt, index))
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

bool SlidingMenuItem::init(const string& pLabelTxt, int pIndex)
{
    if ( !Layer::init() )
    {
        return false;
    }

    labelTxt = pLabelTxt;
    itemIndex = pIndex;
    
    //Size visibleSize = Director::getInstance()->getVisibleSize();
    //Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    
    auto itemImg = Sprite::createWithSpriteFrameName("menu_bg.png");
    
    auto nlabel = LabelTTF::create(labelTxt, "Arial", 24);
    
    this->addChild(itemImg, 1, itemIndex);
    this->addChild(nlabel, 2, itemIndex);
    
    return true;
}

void SlidingMenuItem::itemClick() {
    CCLOG("item clicked %i", itemIndex);
}