//
//  BEPathComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEPathComponent.h"

CEComponentTypeBit BEPathComponent::_componentTypeBit = 0;

BEPathComponent::BEPathComponent()
{}


BEPathComponent::~BEPathComponent(){}

BEPathComponent* BEPathComponent::create()
{
   BEPathComponent* pComponent = new  BEPathComponent();
   return pComponent;
}

CEComponentTypeBit BEPathComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

