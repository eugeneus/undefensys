
#ifndef __undefensys__MainMenu__
#define __undefensys__MainMenu__

#include "cocos2d.h"
#include "BaseMenu.h"

class MainMenu : public BaseMenu
{
public:
    static MainMenu* create();
    static cocos2d::Scene* createScene();
    virtual void initializeMenu();
    virtual MainMenuPopup* createMainMenuPopup();
};


#endif /* defined(__undefensys__MainMenu__) */
