#include "MainMenuPopup.h"
#include "OptionsMenu.h"
#include "GameSelectMenu.h"

USING_NS_CC;

MainMenuPopup* MainMenuPopup::create()
{
    MainMenuPopup *pRet = new MainMenuPopup();
    if (pRet && pRet->init(false))
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

MainMenuPopup* MainMenuPopup::createForStart()
{
    MainMenuPopup *pRet = new MainMenuPopup();
    if (pRet && pRet->init(true))
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

void initMenuItems(cocos2d::Vector<cocos2d::MenuItem*>& menuItems, const std::string& name, const ccMenuCallback& callback) {
    MenuItemFont *menuItem = MenuItemFont::create(name, callback);
    menuItems.pushBack(menuItem);
}

bool MainMenuPopup::init(bool isStartMenu)
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    cocos2d::Vector<cocos2d::MenuItem*> menuItems;
    
    Sprite *bg = Sprite::createWithSpriteFrameName("popup_bg.png");
    bg->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    this->addChild(bg, -1);
    
    initMenuItems(menuItems, "Continue", CC_CALLBACK_1(MainMenuPopup::menuCloseCallback, this));
    initMenuItems(menuItems, "Select game", CC_CALLBACK_1(MainMenuPopup::menuSelectGameCallback, this));
    initMenuItems(menuItems, "Options", CC_CALLBACK_1(MainMenuPopup::menuOptionsCallback, this));
    initMenuItems(menuItems, "Exit", CC_CALLBACK_1(MainMenuPopup::menuExitCallback, this));
    
    if (!isStartMenu) {
        initMenuItems(menuItems, "Close", CC_CALLBACK_1(MainMenuPopup::menuCloseCallback, this));
    }
    
    Menu *mainMenu = Menu::createWithArray(menuItems);
    mainMenu->alignItemsVerticallyWithPadding(10);
    this->addChild(mainMenu, 1);
    
    Sprite *spriteBg = Sprite::createWithSpriteFrameName("menu_bg.png");
    spriteBg->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    this->addChild(spriteBg, 0);
    
    return true;
}

void MainMenuPopup::changeScene(Scene* newScene) {
    TransitionFade *transition = TransitionFade::create(1.0f, newScene);
    Director::getInstance()->replaceScene(transition);
}

void MainMenuPopup::menuOptionsCallback(Ref* pSender) {
    Scene *newScene = OptionsMenu::createScene();
    this->changeScene(newScene);
}

void MainMenuPopup::menuSelectGameCallback(Ref* pSender) {
    Scene *newScene = GameSelectMenu::createScene();
    this->changeScene(newScene);
}

void MainMenuPopup::menuExitCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif
    
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void MainMenuPopup::menuCloseCallback(Ref* pSender) {
    this->removeFromParentAndCleanup(true);
}

