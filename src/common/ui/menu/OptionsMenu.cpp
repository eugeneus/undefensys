
#include "OptionsMenu.h"

USING_NS_CC;

OptionsMenu* OptionsMenu::create()
{
    OptionsMenu *pRet = new OptionsMenu();
    if (pRet && pRet->init("Options"))
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

Scene* OptionsMenu::createScene()
{
    auto scene = Scene::create();
    auto layer = OptionsMenu::create();
    scene->addChild(layer);
    return scene;
}

void OptionsMenu::initializeMenu() {
    super::initializeMenu();
    CCLOG("Options");
}