//
//  BEPositionComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEPositionComponent.h"

CEComponentTypeBit BEPositionComponent::_componentTypeBit = 0;

BEPositionComponent::BEPositionComponent(float aX, float aY)
:_x(aX)
,_y(aY)
{}

BEPositionComponent::~BEPositionComponent(){}

CEComponentTypeBit BEPositionComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

