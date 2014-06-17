//
//  BEAccelerationComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/22/14.
//
//

#include "BEAccelerationComponent.h"

BEAccelerationComponent::BEAccelerationComponent()
:CEComponent(kCEComponentTypeAcc)
,m_x(0.0f)
,m_y(0.0f)
{}


BEAccelerationComponent::~BEAccelerationComponent(){}

BEAccelerationComponent* BEAccelerationComponent::create()
{
   BEAccelerationComponent* pComponent = new  BEAccelerationComponent();
   pComponent->autorelease();
   return pComponent;
}


