//
//  BETargetPositonComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __ESF__BETargetPositonComponent__
#define __ESF__BETargetPositonComponent__

#include "CEComponent.h"

class BETargetPositonComponent : public CEComponent
{
public:
   BETargetPositonComponent(float anEndX = 0.0f, float anEndY = 0.0f);
   ~BETargetPositonComponent();
   static BETargetPositonComponent* create(float anEndX = 0.0f, float anEndY = 0.0f);
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   float m_endX;
   float m_endY;
   
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};


#endif /* defined(__ESF__BETargetPositonComponent__) */
