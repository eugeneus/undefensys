//
//  BESpawnPositionComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BESpawnPositionComponent__
#define __Cocos2DxFirstIosSample__BESpawnPositionComponent__

#include "CEComponent.h"

class BESpawnPositionComponent : public CEComponent
{
public:
   BESpawnPositionComponent(float aStartX = 0.0f, float aStartY = 0.0f, float aDelaySecs = 0.0f);
   ~BESpawnPositionComponent();
   static BESpawnPositionComponent* create(float aStartX = 0.0f, float aStartY = 0.0f, float aDelaySecs = 0.0f);
public:
   float m_startX;
   float m_startY;
   float m_delaySecs;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__BESpawnPositionComponent__) */
