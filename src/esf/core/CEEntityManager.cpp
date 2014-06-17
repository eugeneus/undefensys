//
//  CEEntityManager.cpp
//  ESF (Entity System Foundation)
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
   // Should be implemented:
   // search Entity in Idle list and delete/destroy it
   // search Entity in Active list and delete/destroy it
   // When Active entity is destroyed it should be removed
   // from processed lists of each System
   
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







