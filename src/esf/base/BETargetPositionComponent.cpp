//
//  BETargetPositionComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BETargetPositionComponent.h"

CEComponentTypeBit BETargetPositionComponent::_componentTypeBit = 0;

BETargetPositionComponent::BETargetPositionComponent(float anEndX, float anEndY)
:m_endX(anEndX)
,m_endY(anEndY)
{}

BETargetPositionComponent::~BETargetPositionComponent() {}

BETargetPositionComponent* BETargetPositionComponent::create(float anEndX, float anEndY)
{
   BETargetPositionComponent* pComponent = new BETargetPositionComponent(anEndX, anEndY);
   return pComponent;
}

CEComponentTypeBit BETargetPositionComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

