//
//  BETargetPositonComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BETargetPositonComponent.h"

CEComponentTypeBit BETargetPositonComponent::_componentTypeBit = 0;

BETargetPositonComponent::BETargetPositonComponent(float anEndX, float anEndY)
:m_endX(anEndX)
,m_endY(anEndY)
{}

BETargetPositonComponent::~BETargetPositonComponent() {}

BETargetPositonComponent* BETargetPositonComponentcreate(float anEndX, float anEndY)
{
   BETargetPositonComponent* pComponent = new BETargetPositonComponent(anEndX, anEndY);
   return pComponent;
}

CEComponentTypeBit BETargetPositonComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}


