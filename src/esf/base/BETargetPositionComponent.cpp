//
//  BETargetPositionComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BETargetPositionComponent.h"

BETargetPositionComponent::BETargetPositionComponent(float anEndX, float anEndY)
:CEComponent(kCEComponentTypeTargPos)
,m_endX(anEndX)
,m_endY(anEndY)
{}

BETargetPositionComponent::~BETargetPositionComponent() {}

BETargetPositionComponent* BETargetPositionComponent::create(float anEndX, float anEndY)
{
   BETargetPositionComponent* pComponent = new BETargetPositionComponent(anEndX, anEndY);
   return pComponent;
}
