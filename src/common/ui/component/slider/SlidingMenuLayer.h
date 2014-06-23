
#ifndef __undefensys__SlidingMenuLayer__
#define __undefensys__SlidingMenuLayer__

#include "cocos2d.h"
#include "extensions/GUI/CCScrollView/CCScrollView.h"
#include "SlidingMenuItem.h"

class SlidingMenuLayer : public cocos2d::Layer
{
private:
    static const int SCROLLVIEW_TAG = 300;
    cocos2d::Size pScreenSize;
    cocos2d::extension::ScrollView* scrollView;
    //BitmapFontAtlas statusLabel ;
    cocos2d::Vec2 startlocation; //keep track of touch starting point
    cocos2d::Vec2 endlocation;   //keep track of touch ending point
    float tilescale ;
    float generalscalefactor = 0.0f ;
    
    
    bool isVertical = false;
    int rowsCount = 1;

    
public:
    static SlidingMenuLayer* create(int rowsCount, bool isVertical);
    virtual bool init(int rowsCount, bool isVertical);
    
    virtual void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event::Event *unused_event);
    //virtual void registerWithTouchDispatcher();
};


#endif /* defined(__undefensys__SlidingMenuLayer__) */
