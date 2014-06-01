//
//  CEEntity.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "CEEntity.h"

CEEntity::CEEntity(void)
:_componentTypesBitMask(0)
{
   _components = new std::vector<CEComponent*>();
}

CEEntity::~CEEntity(void)
{
   _components->clear();
   delete _components;
}

CEEntity* CEEntity::createWithInitialCapacity(unsigned int aCapacity)
{
   CEEntity* pEntity = new CEEntity();
   return pEntity;
   
}

void CEEntity::addComponent(CEComponent* aComponent)
{
   
   CEComponentTypeBit  componentTypeBit = aComponent->getCEComponentTypeBit();
   
   _componentTypesBitMask = _componentTypesBitMask | componentTypeBit;
   _components->push_back(aComponent);
   
   
}

CEComponent* CEEntity::componentByType(CEComponentTypeBit aComponentTypeBit)
{
   CEComponent* componentOfType = NULL;
   
   for ( _iComponentRef = this->_components->begin(); _iComponentRef != this->_components->end(); ++_iComponentRef ){
      
      if ((*_iComponentRef)->getCEComponentTypeBit() == aComponentTypeBit) {
         componentOfType = (*_iComponentRef);
      }
      
   }
   
   return componentOfType;

}


void CEEntity::removeComponentOfType(CEComponentTypeBit aComponentTypeBit)
{

}


CEComponentTypeBit CEEntity::componentTypesBitMask()
{
   return _componentTypesBitMask;
}

std::vector<CEComponent*>* CEEntity::componentsList(int componentsCount)
{
   return _components;
}

void CEEntity::setEntityID(int anEntityID)
{
   _entityID = anEntityID;
}

int CEEntity::getEntityID()
{
   return _entityID;
}


