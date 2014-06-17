//
//  BESizeComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BESizeComponent__
#define __Cocos2DxFirstIosSample__BESizeComponent__

#include "CEComponent.h"

class BESizeComponent : public CEComponent
{
public:
   BESizeComponent();
   ~BESizeComponent();
   static BESizeComponent* create();
public:
   
   float m_height;
   float m_width;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__BESizeComponent__) */
