//
//  BERotationActionComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BERotationActionComponent__
#define __Cocos2DxFirstIosSample__BERotationActionComponent__

#include "CEComponent.h"

class BERotationActionComponent : public CEComponent
{
public:
   BERotationActionComponent(float aDegreePerSec = 0.0f, float anAngle = 0.0f);
   ~BERotationActionComponent();
   static BERotationActionComponent* create(float aDegreePerSec = 0.0f, float anAngle = 0.0f);
public:
   float m_degreePerSec;
   float m_angle;
   float m_nextTick;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__BERotationActionComponent__) */
