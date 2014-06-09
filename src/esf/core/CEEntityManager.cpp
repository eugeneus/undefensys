//
//  CEEntityManager.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "CEEntityManager.h"


CEEntityManager::CEEntityManager()
{
   _iEntities = new std::vector<CEEntity*>;
   _aEntities = new std::vector<CEEntity*>;

}
CEEntityManager::~CEEntityManager()
{
   _iEntities->clear();
   _aEntities->clear();

   delete _iEntities;
   delete _aEntities;

}

CEEntityManager* CEEntityManager::createWithInitalCapacity(unsigned int anEntities)
{
   CEEntityManager *pEntityManager = new CEEntityManager();
   return pEntityManager;
   
}

void CEEntityManager::addEntity(CEEntity* anEntity)
{
   _iEntities->push_back(anEntity);
}

void CEEntityManager::deleteEntity(CEEntity* anEntity)
{
   //m_aEntities->removeObject(anEntity);
   //m_iEntities->removeObject(anEntity);
}

//@brief returns copy of array with idle Entities
CEEntitiesPtrVectorPtr CEEntityManager::idleEntities()
{
   if (_iEntities->size() == 0) {
      return NULL;
   }
   
   return _iEntities;
}

int CEEntityManager::getIdleEntitiesCount()
{
   return _iEntities->size();
}

CEEntity* CEEntityManager::getIdleEntityByIndex(int anIdleEntityIndex)
{
   return (*_iEntities->begin()+anIdleEntityIndex);
}

void CEEntityManager::commitIdleEntityActivationByIndex(int anIdleEntityIndex)
{
   _aEntities->push_back(_iEntities->at(anIdleEntityIndex));
   _iEntities->erase(_iEntities->begin()+anIdleEntityIndex);
}

//@brief removes entity from idle list.
//      if entity is not found does nothing
void CEEntityManager::commitActivation(CEEntity* anEntity)
{
   //m_iEntities->removeObject(anEntity);
}

//@brief removes entity from idle list by arrayindex.
//      if entity is not found or index is wrong does nothing
void CEEntityManager::commitActivation(unsigned int anEntityIndex)
{
   //TODO: make sure we need an index verification with CCArrays
   //m_iEntities->removeObjectAtIndex(anEntityIndex);
}

//@brief clears idle Entity array
void CEEntityManager::commitActivation(void)
{
   for ( _EntityPtr = this->_iEntities->begin(); _EntityPtr != this->_iEntities->end(); ++_EntityPtr ){
      _aEntities->push_back((*_EntityPtr));
   }
   _iEntities->clear();
}






