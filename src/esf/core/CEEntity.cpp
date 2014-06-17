//
//  CEEntity.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "CEEntity.h"

int CEEntity::_nextEntityID = 0;

CEEntity::CEEntity(void)
:_componentTypesBitMask(0)
,_entityID(-1)
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

int CEEntity::getEntityID()
{
   if (this->_entityID < 0) {
      this->_entityID = _getNextEntityID();
   }
   return _entityID;
}

int CEEntity::_getNextEntityID()
{
   return _nextEntityID++;
}


