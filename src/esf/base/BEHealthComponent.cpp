//
//  BEHealthComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEHealthComponent.h"

CEComponentTypeBit BEHealthComponent::_componentTypeBit = 0;

BEHealthComponent::BEHealthComponent(int aHealthLevel)
:_healthLevel(aHealthLevel)
{}

BEHealthComponent::~BEHealthComponent(){}

CEComponentTypeBit BEHealthComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

