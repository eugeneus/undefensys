#include "SelectGameLayer.h"
#include "SlidingMenuLayer.h"

USING_NS_CC;

SelectGameLayer* SelectGameLayer::create()
{
    SelectGameLayer *pRet = new SelectGameLayer();
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

bool SelectGameLayer::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto slider = SlidingMenuLayer::create(2, false);
    this->addChild(slider);
    
    return true;
}