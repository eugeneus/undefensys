
#ifndef __undefensys__BaseMenu__
#define __undefensys__BaseMenu__

#include "cocos2d.h"
#include "MainMenuPopup.h"

class BaseMenu : public cocos2d::Layer
{
public:
    virtual bool init(const std::string& pMenuTitle);
    //virtual bool init();
    virtual void initializeMenu() = 0;
    virtual MainMenuPopup* createMainMenuPopup();
    
    void showMainMenu();
};

#endif /* defined(__undefensys__BaseMenu__) */
