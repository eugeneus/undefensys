
#include "GameSelectMenu.h"

USING_NS_CC;

GameSelectMenu* GameSelectMenu::create()
{
    GameSelectMenu *pRet = new GameSelectMenu();
    if (pRet && pRet->init("Select Game"))
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

Scene* GameSelectMenu::createScene()
{
    auto scene = Scene::create();
    auto layer = GameSelectMenu::create();
    scene->addChild(layer);
    return scene;
}

void GameSelectMenu::initializeMenu() {

    super::initializeMenu();
    
    CCLOG("Select menu");
}
