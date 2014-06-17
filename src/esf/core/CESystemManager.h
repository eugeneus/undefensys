//
//  CESystemManager.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__CESystemManager__
#define __ESF__CESystemManager__

#include <vector>

class CESystem;
class CEEntityManager;

class CESystemManager
{
public:
   
   CESystemManager(CEEntityManager* aSystemManager = NULL, int aCapacity = 0);
   ~CESystemManager();
   
   static CESystemManager* create(CEEntityManager* aEntityManager, int aCapacity);
   
   void addSystem(CESystem* aSystem);
   
   void cleanUpSystems(void);
   
   void update(float dt);
   
private:
   
   CEEntityManager* _entityManager;
   int _capacity;
   std::vector<CESystem*>* _systems;
   typename std::vector<CESystem*>::const_iterator _itSystemPtr;
   void updateSystemsNodes();
   //void registerIdleEntities();
   
   
};

#endif /* defined(__ESF__CESystemManager__) */
