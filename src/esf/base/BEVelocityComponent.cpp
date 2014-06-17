//
//  BEVelocityComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEVelocityComponent.h"

BEVelocityComponent::BEVelocityComponent()
:CEComponent(kCEComponentTypeVel)
,m_vX(0.0f)
,m_vY(0.0f)
,m_vXmax(0.0f)
,m_vYmax(0.0f)
{}

BEVelocityComponent::~BEVelocityComponent(){}

BEVelocityComponent* BEVelocityComponent::create(float avX, float avY)
{
   BEVelocityComponent* pComponent = new  BEVelocityComponent();
   pComponent->m_vX = avX;
   pComponent->m_vY = avY;
   pComponent->autorelease();
   return pComponent;
}
