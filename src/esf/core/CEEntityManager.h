//
//  CEEntityManager.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__CEEntityManager__
#define __ESF__CEEntityManager__

#include "CEComponent.h"
#include "CEEntity.h"


/* TODO: turn into  C++ Singleton pattern ?
 
 */

/*
 @brief CEEntityManager is a list of entites, list of new entities
 */

typedef std::vector<CEEntity*>* CEEntitiesPtrVectorPtr;

class CEEntityManager
{
public:
   
   CEEntityManager();
   ~CEEntityManager();
   
   static CEEntityManager* createWithInitalCapacity(unsigned int anEntities);
   
   //@brief add an Entity to the list of "Idle Entities",
   //      which are not processed by systems
   void addEntity(CEEntity* anEntity);
   
   void deleteEntity(CEEntity* anEntity);
   
   //@bries This method is called by system manager only.
   //       returns number of "Idle Entities"
   int getIdleEntitiesCount();
   
   //@brief This method is called by system manager only.
   //        returns pointer to an Idle instance by the idex
   CEEntity* getIdleEntityByIndex(int anIdleEntityIndex);
   
   //@brief This method is called by system manager only.
   //       System manager call this to let know that
   //       Idle Entity has been registered by System
   //       and can be moved from Idle to Active list
   void commitIdleEntityActivationByIndex(int anIdleEntityIndex);
   

private:
   
   CEEntitiesPtrVectorPtr _iEntities;
   CEEntitiesPtrVectorPtr _aEntities;
   
   typename std::vector<CEEntity*>::const_iterator _EntityPtr;
   
};

#endif /* defined(__ESF__CEEntityManager__) */
