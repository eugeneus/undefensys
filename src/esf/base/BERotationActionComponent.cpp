//
//  BERotationActionComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BERotationActionComponent.h"

BERotationActionComponent::BERotationActionComponent(float aDegreePerSec,float anAngle)
:CEComponent(kCEComponentTypeARot)
,m_degreePerSec(aDegreePerSec)
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
