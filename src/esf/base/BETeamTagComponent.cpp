//
//  BETeamTagComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#include "BETeamTagComponent.h"

BETeamTagComponent::BETeamTagComponent(int aTag)
:CEComponent(kCEComponentTypeTeamTag)
,m_tag(aTag)
{}

BETeamTagComponent::~BETeamTagComponent() {}

BETeamTagComponent* BETeamTagComponent::create(int aTag)
{
   BETeamTagComponent* pComponent = new BETeamTagComponent(aTag);
   return pComponent;
}
