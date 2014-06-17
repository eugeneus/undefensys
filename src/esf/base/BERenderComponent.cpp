//
//  BERenderComponent.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BERenderComponent.h"

BERenderComponent::BERenderComponent()
:CEComponent(kCEComponentTypeRend)
,m_sprite(NULL)
{}

BERenderComponent::~BERenderComponent(){}

BERenderComponent* BERenderComponent::create(cocos2d::CCSprite* aSprite)
{
   BERenderComponent* pComponent = new BERenderComponent();
   pComponent->autorelease();
   pComponent->m_sprite = aSprite;
   pComponent->m_sprite->retain();
   return pComponent;
}

