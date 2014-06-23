//
//  BETargetComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BETargetComponent.h"

CEComponentTypeBit BETargetComponent::_componentTypeBit = 0;

BETargetComponent::BETargetComponent()
:m_xPos(0.0f)
,m_yPos(0.0f)
{}

BETargetComponent::~BETargetComponent(){}

BETargetComponent* BETargetComponent::create()
{
   BETargetComponent* pComponent = new  BETargetComponent();
   return pComponent;

}

CEComponentTypeBit BETargetComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}


