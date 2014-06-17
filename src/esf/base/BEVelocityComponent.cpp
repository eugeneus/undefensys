//
//  BEVelocityComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEVelocityComponent.h"

CEComponentTypeBit BEVelocityComponent::_componentTypeBit = 0;

BEVelocityComponent::BEVelocityComponent(float aX, float aY, float aXmax, float aYmax)
:_vlX(aX)
,_vlY(aY)
,_vlXmax(aXmax)
,_vlYmax(aYmax)
{}

BEVelocityComponent::~BEVelocityComponent(){}

CEComponentTypeBit BEVelocityComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

