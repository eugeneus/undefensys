#ifndef __undefensys__MainMenuPopup__
#define __undefensys__MainMenuPopup__

#include "cocos2d.h"

class MainMenuPopup : public cocos2d::Layer
{
public:
    static MainMenuPopup* create();
    static MainMenuPopup* createForStart();
    
    virtual bool init(bool isStartMenu);
    
    void changeScene(cocos2d::Scene* newScene);
    
    void menuSelectGameCallback(cocos2d::Ref* pSender);
    void menuOptionsCallback(cocos2d::Ref* pSender);
    void menuExitCallback(cocos2d::Ref* pSender);
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    //CREATE_FUNC(MainMenuPopup);
};


#endif /* defined(__undefensys__MainMenuPopup__) */
