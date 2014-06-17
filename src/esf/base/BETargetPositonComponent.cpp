//
//  BETargetPositonComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "BETargetPositonComponent.h"

BETargetPositonComponent::BETargetPositonComponent(float anEndX, float anEndY)
:CEComponent(kCEComponentTypeTargPos)
,m_endX(anEndX)
,m_endY(anEndY)
{}

BETargetPositonComponent::~BETargetPositonComponent() {}

BETargetPositonComponent* BETargetPositonComponentcreate(float anEndX, float anEndY)
{
   BETargetPositonComponent* pComponent = new BETargetPositonComponent(anEndX, anEndY);
   return pComponent;
}

