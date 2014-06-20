
#include "MainMenu.h"
#include "MainMenuPopup.h"

USING_NS_CC;

MainMenu* MainMenu::create()
{
    MainMenu *pRet = new MainMenu();
    if (pRet && pRet->init("Main Menu"))
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

Scene* MainMenu::createScene()
{
    auto scene = Scene::create();
    auto layer = MainMenu::create();
    scene->addChild(layer);
    return scene;
}

MainMenuPopup* MainMenu::createMainMenuPopup() {
    return MainMenuPopup::createForStart();
}

void MainMenu::initializeMenu() {
    
    CCLOG("Main Menu");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("place.plist");
    SpriteBatchNode *spriteBatch = SpriteBatchNode::create("place.png");
    this->addChild(spriteBatch);
    
    
    this->showMainMenu();
}