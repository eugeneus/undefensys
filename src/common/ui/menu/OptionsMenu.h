
#ifndef __undefensys__OptionsMenu__
#define __undefensys__OptionsMenu__

#include "cocos2d.h"
#include "SimpleMenu.h"

class OptionsMenu : public SimpleMenu
{
private:
    typedef SimpleMenu super;
public:
    static OptionsMenu* create();
    static cocos2d::Scene* createScene();
    virtual void initializeMenu();
};


#endif /* defined(__undefensys__OptionsMenu__) */
