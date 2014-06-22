//
//  BEAccelerationComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/22/14.
//
//

#include "BEAccelerationComponent.h"

CEComponentTypeBit BEAccelerationComponent::_componentTypeBit = 0;


BEAccelerationComponent::BEAccelerationComponent()
:m_x(0.0f)
,m_y(0.0f)
{}


BEAccelerationComponent::~BEAccelerationComponent(){}

BEAccelerationComponent* BEAccelerationComponent::create()
{
   BEAccelerationComponent* pComponent = new  BEAccelerationComponent();
   return pComponent;
}

CEComponentTypeBit BEAccelerationComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}


