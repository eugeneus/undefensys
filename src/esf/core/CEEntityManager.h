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
   
   void addEntity(CEEntity* anEntity);
   
   void deleteEntity(CEEntity* anEntity);

   //@brief removes entity from idle list.
   //      if entity is not found does nothing
   void commitActivation(CEEntity* anEntity);

   //@brief removes entity from idle list by arrayindex.
   //      if entity is not found or index is wrong does nothing
   void commitActivation(unsigned int anEntityIndex);
   
   //@brief clears idle Entity array
   void commitActivation(void);
   
   //@brief returns copy of idle Entities array
   CEEntitiesPtrVectorPtr idleEntities(); // idleEntities

private:
   
   CEEntitiesPtrVectorPtr _iEntities;
   CEEntitiesPtrVectorPtr _aEntities;
   
   typename std::vector<CEEntity*>::const_iterator _EntityPtr;
   
};

#endif /* defined(__ESF__CEEntityManager__) */
