//
//  BESizeComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BESizeComponent.h"

BESizeComponent::BESizeComponent()
:CEComponent(kCEComponentTypeSize)
,m_height(0.0f)
,m_width(0.0f)
{}

BESizeComponent::~BESizeComponent(){}

BESizeComponent* BESizeComponent::create()
{
   BESizeComponent* pSizeComponent = new  BESizeComponent();
   pSizeComponent->autorelease();
   return pSizeComponent;
}
