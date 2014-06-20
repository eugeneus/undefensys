
#ifndef __undefensys__SimpleMenu__
#define __undefensys__SimpleMenu__


#include "cocos2d.h"
#include "BaseMenu.h"

class SimpleMenu : public BaseMenu
{
private:
    typedef BaseMenu super;
public:
    virtual void initializeMenu();
    
    void menuShowMenuCallback(Ref* pSender);
};

#endif /* defined(__undefensys__SimpleMenu__) */
