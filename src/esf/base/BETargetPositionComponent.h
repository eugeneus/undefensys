//
//  BETargetPositionComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __ESF__BETargetPositionComponent__
#define __ESF__BETargetPositionComponent__

#include "CEComponent.h"

class BETargetPositionComponent : public CEComponent
{
public:
   BETargetPositionComponent(float anEndX = 0.0f, float anEndY = 0.0f);
   ~BETargetPositionComponent();
   static BETargetPositionComponent* create(float anEndX = 0.0f, float anEndY = 0.0f);
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   float m_endX;
   float m_endY;
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};

#endif /* defined(__ESF__BETargetPositionComponent__) */
