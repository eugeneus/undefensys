//
//  CESystemManager.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "CESystemManager.h"
#include "CESystem.h"
#include "CEEntityManager.h"

CESystemManager::CESystemManager(CEEntityManager* aSystemManager, int aCapacity)
:_entityManager(NULL)
,_capacity(aCapacity)
{
   _systems = new std::vector<CESystem*>(_capacity);
}

CESystemManager::~CESystemManager()
{
   _systems->clear();
   delete _systems;
   
}

CESystemManager* CESystemManager::create(CEEntityManager* aSystemManager, int aCapacity)
{
   CESystemManager* pSystemManager = new CESystemManager(aSystemManager, aCapacity);
   return pSystemManager;
}


void CESystemManager::addSystem(CESystem* aSystem)
{
   _systems->push_back(aSystem);
   
}

void CESystemManager::cleanUpSystems(void)
{
   _systems->clear();
   
}

//void CESystemManager::registerIdleEntities()
//{

//}

void CESystemManager::updateSystemsNodes()
{
   CESystem* system = NULL;
   CEEntity* entity = NULL;
   
   int idleEntitiesCount = _entityManager->getIdleEntitiesCount();
   int nodeSetsCount = 0;
   for (int iIdleEntity = 0; iIdleEntity < idleEntitiesCount; iIdleEntity++) {
      entity = _entityManager->getIdleEntityByIndex(iIdleEntity);
      for (_itSystemPtr = this->_systems->begin(); _itSystemPtr != this->_systems->end(); ++_itSystemPtr) {
         system = (*_itSystemPtr);
         nodeSetsCount = system->getNodeSetsCount();
         for (int iNodeSet = 0; iNodeSet < nodeSetsCount; iNodeSet++) {
            if (entity->componentTypesBitMask() == system->getNodeTypeSetByIndex(iNodeSet)) {
               system->registerEntityForNodeTypeSetIndex(entity, iNodeSet);
            }
         }
      }
      _entityManager->commitIdleEntityActivationByIndex(iIdleEntity);
   }

}

void CESystemManager::update(float dt)
{
   
   updateSystemsNodes(); 
   
   for ( _itSystemPtr = this->_systems->begin(); _itSystemPtr != this->_systems->end(); ++_itSystemPtr ){
      (*_itSystemPtr)->update(dt);
   }
   
}



