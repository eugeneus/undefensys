//
//  BEPathComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEPathComponent.h"

BEPathComponent::BEPathComponent()
:CEComponent(kCEComponentTypePath)
{}


BEPathComponent::~BEPathComponent(){}

BEPathComponent* BEPathComponent::create()
{
   BEPathComponent* pComponent = new  BEPathComponent();
   pComponent->autorelease();
   return pComponent;
}
