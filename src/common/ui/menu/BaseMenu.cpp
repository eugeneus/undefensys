#include "BaseMenu.h"
#include "MainMenuPopup.h"

USING_NS_CC;

bool BaseMenu::init(const std::string& pMenuTitle)
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto label = LabelTTF::create(pMenuTitle, "Arial", 24);
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));
    this->addChild(label, 1);
    this->initializeMenu();
    
    return true;
}

MainMenuPopup* BaseMenu::createMainMenuPopup() {
    return MainMenuPopup::create();
}

void BaseMenu::showMainMenu() {
    MainMenuPopup *menuPopup = this->createMainMenuPopup();
    this->addChild(menuPopup, 1001);
}