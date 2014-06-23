//
//  BERotationActionComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __ESF__BERotationActionComponent__
#define __ESF__BERotationActionComponent__

#include "CEComponent.h"

class BERotationActionComponent : public CEComponent
{
public:
   BERotationActionComponent(float aDegreePerSec = 0.0f, float anAngle = 0.0f);
   ~BERotationActionComponent();
   static BERotationActionComponent* create(float aDegreePerSec = 0.0f, float anAngle = 0.0f);
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   float m_degreePerSec;
   float m_angle;
   float m_nextTick;
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};

#endif /* defined(__ESF__BERotationActionComponent__) */
