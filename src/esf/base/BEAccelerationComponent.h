//
//  BEAccelerationComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/22/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BEAccelerationComponent__
#define __Cocos2DxFirstIosSample__BEAccelerationComponent__

#include "CEComponent.h"

class BEAccelerationComponent : public CEComponent
{
public:
   BEAccelerationComponent();
   ~BEAccelerationComponent();
   static BEAccelerationComponent* create();
public:
   float m_x;
   float m_y;
};



#endif /* defined(__Cocos2DxFirstIosSample__BEAccelerationComponent__) */
