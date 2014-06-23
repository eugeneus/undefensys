//
//  BETeamTagComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#include "BETeamTagComponent.h"

CEComponentTypeBit BETeamTagComponent::_componentTypeBit = 0;

BETeamTagComponent::BETeamTagComponent(int aTag)
:m_tag(aTag)
{}

BETeamTagComponent::~BETeamTagComponent() {}

BETeamTagComponent* BETeamTagComponent::create(int aTag)
{
   BETeamTagComponent* pComponent = new BETeamTagComponent(aTag);
   return pComponent;
}

CEComponentTypeBit BETeamTagComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}

