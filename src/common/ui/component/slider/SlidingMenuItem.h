

#ifndef __undefensys__SlidingMenuItem__
#define __undefensys__SlidingMenuItem__

#include "cocos2d.h"
#include <string.h>

using namespace std;

class SlidingMenuItem : public cocos2d::Layer
{
protected:
    string labelTxt;
    int itemIndex;
    
    
public:
    static SlidingMenuItem* create(const string& labelTxt, int index);
    virtual bool init(const string& labelTxt, int index);
    
    virtual void itemClick();
};

#endif /* defined(__undefensys__SlidingMenuItem__) */
