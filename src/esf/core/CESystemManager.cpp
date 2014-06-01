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

void CESystemManager::registerIdleEntities()
{

}


void CESystemManager::updateSystemsNodes()
{
   
/*
   CCObject* pEntity = NULL;
   CCObject* pSystem = NULL;
   int requiredComponents = 0;
   int existingComponents = 0;
   
   cocos2d::CCArray* inactiveEntities = m_entityManager->idleEntities();
   
   if (inactiveEntities && inactiveEntities->count() > 0) {
      CCARRAY_FOREACH(m_systems, pSystem){
         requiredComponents = ((EISystem*)pSystem)->requiredComponentTypes();
         CCARRAY_FOREACH(inactiveEntities, pEntity){
            existingComponents = ((CEEntity*)pEntity)->componentTypes();
            
            if ((existingComponents & requiredComponents) == requiredComponents) {
               ((EISystem*)pSystem)->registerEntity(((CEEntity*)pEntity));
               //m_entityManager->commitActivation(((CEEntity*)pEntity)); bug: do not allow registration fo rmultiple systems
            }
         }
      }
   }
*/
   // if procedure reach this point, cleanup idleEntities anyways
   _entityManager->commitActivation();
   
}

void CESystemManager::update(float dt)
{
   
   updateSystemsNodes(); 
   
   for ( _itSystemPtr = this->_systems->begin(); _itSystemPtr != this->_systems->end(); ++_itSystemPtr ){
      (*_itSystemPtr)->update(dt);
   }
   
}



