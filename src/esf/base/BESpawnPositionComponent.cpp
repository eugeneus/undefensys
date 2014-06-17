//
//  BESpawnPositionComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BESpawnPositionComponent.h"

BESpawnPositionComponent::BESpawnPositionComponent(float aStartX, float aStartY, float aDelaySecs)
:CEComponent(kCEComponentTypeSpawnPos)
,m_startX(aStartX)
,m_startY(aStartY)
,m_delaySecs(aDelaySecs)
{}

BESpawnPositionComponent::~BESpawnPositionComponent() {}

BESpawnPositionComponent* BESpawnPositionComponent::create(float aStartX, float aStartY, float aDelaySecs)
{
   BESpawnPositionComponent* pComponent = new BESpawnPositionComponent(aStartX,aStartY, aDelaySecs);
   return pComponent;
}

