//
//  BERotationActionComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BERotationActionComponent.h"

CEComponentTypeBit BERotationActionComponent::_componentTypeBit = 0;

BERotationActionComponent::BERotationActionComponent(float aDegreePerSec,float anAngle)
:m_degreePerSec(aDegreePerSec)
,m_angle(anAngle)
,m_nextTick(0.0f)
{}

BERotationActionComponent::~BERotationActionComponent() {}

BERotationActionComponent* BERotationActionComponent::create(float aDegreePerSec, float anAngle)
{
   BERotationActionComponent* pComponent = new  BERotationActionComponent(aDegreePerSec, anAngle);
   //pComponent->autorelease();
   return pComponent;
}

CEComponentTypeBit BERotationActionComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

