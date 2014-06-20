

#ifndef __undefensys__GameSelectMenu__
#define __undefensys__GameSelectMenu__

#include "cocos2d.h"
#include "SimpleMenu.h"

class GameSelectMenu : public SimpleMenu
{
private:
    typedef SimpleMenu super;
public:
    static GameSelectMenu* create();
    static cocos2d::Scene* createScene();
    virtual void initializeMenu();
    
    //CREATE_FUNC(GameSelectMenu);

    
    //void showMainMenuCallback(cocos2d::Ref* pSender)
};


#endif /* defined(__undefensys__GameSelectMenu__) */
