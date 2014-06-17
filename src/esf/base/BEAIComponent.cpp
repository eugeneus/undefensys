//
//  BEAIComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEAIComponent.h"

BEAIComponent::BEAIComponent()
:CEComponent(kCEComponentTypeAI)
{}


BEAIComponent::~BEAIComponent(){}

BEAIComponent* BEAIComponent::create()
{
   BEAIComponent* pComponent = new  BEAIComponent();
   pComponent->autorelease();
   return pComponent;
}
