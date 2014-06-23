//
//  BEAIComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEAIComponent.h"

CEComponentTypeBit BEAIComponent::_componentTypeBit = 0;


BEAIComponent::BEAIComponent()
{}


BEAIComponent::~BEAIComponent(){}

BEAIComponent* BEAIComponent::create()
{
   BEAIComponent* pComponent = new  BEAIComponent();
   return pComponent;
}

CEComponentTypeBit BEAIComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

