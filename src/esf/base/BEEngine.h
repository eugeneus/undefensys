//
//  BEEngine.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//  Facade of ESF

#ifndef __ESF__BEEngine__
#define __ESF__BEEngine__


class CESystemManager;
class CEEntityManager;
class CEEntity;
class CESystem;

class BEEngine
{
public:
   
   BEEngine();
   ~BEEngine();
   
   static BEEngine* createWithInitalCapacity(unsigned int aCapacity);
   
   void addEntity(CEEntity* anEntity);
   
   void addSystem(CESystem* aSystem);
   
   void update(float dt);

private:
   
   CEEntityManager* _pEm;
   CESystemManager* _pSm;
   
};

#endif /* defined(__ESF__BEEngine__) */
