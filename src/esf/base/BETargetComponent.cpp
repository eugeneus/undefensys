//
//  BETargetComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BETargetComponent.h"

BETargetComponent::BETargetComponent()
:CEComponent(kCEComponentTypeTrg)
,m_xPos(0.0f)
,m_yPos(0.0f)
{}

BETargetComponent::~BETargetComponent(){}

BETargetComponent* BETargetComponent::create()
{
   BETargetComponent* pComponent = new  BETargetComponent();
   pComponent->autorelease();
   return pComponent;

}

