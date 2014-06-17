//
//  BERenderComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BERenderComponent.h"

CEComponentTypeBit BERenderComponent::_componentTypeBit = 0;

BERenderComponent::BERenderComponent(cocos2d::Sprite* aSprite)
:_pSprite(aSprite)
{}

BERenderComponent::~BERenderComponent()
{
   //delete _pSprite;
}

CEComponentTypeBit BERenderComponent::getCEComponentTypeBit()
{
   if (!_componentTypeBit) {
      _componentTypeBit = CEComponent::nextComponenTypeBit();
   }
   
   return _componentTypeBit;
}


