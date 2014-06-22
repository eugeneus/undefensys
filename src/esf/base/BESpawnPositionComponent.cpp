//
//  BESpawnPositionComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BESpawnPositionComponent.h"

CEComponentTypeBit BESpawnPositionComponent::_componentTypeBit = 0;

BESpawnPositionComponent::BESpawnPositionComponent(float aStartX, float aStartY, float aDelaySecs)
:m_startX(aStartX)
,m_startY(aStartY)
,m_delaySecs(aDelaySecs)
{}

BESpawnPositionComponent::~BESpawnPositionComponent() {}

BESpawnPositionComponent* BESpawnPositionComponent::create(float aStartX, float aStartY, float aDelaySecs)
{
   BESpawnPositionComponent* pComponent = new BESpawnPositionComponent(aStartX,aStartY, aDelaySecs);
   return pComponent;
}

CEComponentTypeBit BESpawnPositionComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}


