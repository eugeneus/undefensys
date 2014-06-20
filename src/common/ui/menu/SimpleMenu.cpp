#include "SimpleMenu.h"

USING_NS_CC;

void SimpleMenu::initializeMenu() {
    CCLOG("SimpleMenu");
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto closeItem = MenuItemSprite::create(
                                            Sprite::createWithSpriteFrameName("btn_menu.png"),
                                            Sprite::createWithSpriteFrameName("btn_menu.png"),
                                            CC_CALLBACK_1(SimpleMenu::menuShowMenuCallback, this));
    //MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(SimpleMenu::menuShowMenuCallback, this));
    
	closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + visibleSize.height - closeItem->getContentSize().height/2));
    
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
}

void SimpleMenu::menuShowMenuCallback(Ref* pSender) {
    
    this->showMainMenu();
}