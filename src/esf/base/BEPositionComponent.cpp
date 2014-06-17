//
//  BEPositionComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEPositionComponent.h"

BEPositionComponent::BEPositionComponent()
:CEComponent(kCEComponentTypePos)
,m_xPos(0.0f)
,m_yPos(0.0f)
{}


BEPositionComponent::~BEPositionComponent(){}

BEPositionComponent* BEPositionComponent::create(float aX, float aY)
{
   BEPositionComponent* pComponent = new  BEPositionComponent();
   pComponent->m_xPos = aX;
   pComponent->m_yPos = aY;
   pComponent->autorelease();
   return pComponent;
}

