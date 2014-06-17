//
//  ASpawnTeamMoveSystem.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ASpawnTeamMoveSystem__
#define __Cocos2DxFirstIosSample__ASpawnTeamMoveSystem__

#include "EISystem.h"
class ASpawnTeamMoveNode;

class ASpawnTeamMoveSystem : public EISystem
{
public:
   
   ASpawnTeamMoveSystem();
   
   ~ASpawnTeamMoveSystem();
   
   static ASpawnTeamMoveSystem* create();
   
   virtual void registerEntity(CEEntity* anEntity);
   
   virtual void update(float dt);
   
protected:
   
   std::vector<ASpawnTeamMoveNode>* m_nodeChain;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__ASpawnTeamMoveSystem__) */
