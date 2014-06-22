//
//  BESizeComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BESizeComponent.h"

CEComponentTypeBit BESizeComponent::_componentTypeBit = 0;

BESizeComponent::BESizeComponent()
:m_height(0.0f)
,m_width(0.0f)
{}

BESizeComponent::~BESizeComponent(){}

BESizeComponent* BESizeComponent::create()
{
   BESizeComponent* pSizeComponent = new  BESizeComponent();
   return pSizeComponent;
}

CEComponentTypeBit BESizeComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

