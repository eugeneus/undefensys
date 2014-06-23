//
//  BESpawnPositionComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __ESF__BESpawnPositionComponent__
#define __ESF__BESpawnPositionComponent__

#include "CEComponent.h"

class BESpawnPositionComponent : public CEComponent
{
public:
   BESpawnPositionComponent(float aStartX = 0.0f, float aStartY = 0.0f, float aDelaySecs = 0.0f);
   ~BESpawnPositionComponent();
   static BESpawnPositionComponent* create(float aStartX = 0.0f, float aStartY = 0.0f, float aDelaySecs = 0.0f);
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   float m_startX;
   float m_startY;
   float m_delaySecs;
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};

#endif /* defined(__ESF__BESpawnPositionComponent__) */
