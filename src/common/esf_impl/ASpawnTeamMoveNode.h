//
//  ASpawnTeamMoveNode.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ASpawnTeamMoveNode__
#define __Cocos2DxFirstIosSample__ASpawnTeamMoveNode__

#include "CENode.h"
#include "BERenderComponent.h"
#include "BESpawnPositionComponent.h"
#include "BETargetPositionComponent.h"
#include "BEVelocityComponent.h"

class ASpawnTeamMoveNode : public CENode
{
public:
   
   ASpawnTeamMoveNode(BERenderComponent* aRend,
                      BESpawnPositionComponent* aStartPos,
                      BETargetPositionComponent* anEndPos,
                      BEVelocityComponent* aVel
                     );
   
   ~ASpawnTeamMoveNode();
   
   static ASpawnTeamMoveNode* create(BERenderComponent* aRend,
                                     BESpawnPositionComponent* aStartPos,
                                     BETargetPositionComponent* anEndPos,
                                     BEVelocityComponent* aVel
                                     );
   
public:

   BERenderComponent* m_pRender;
   BESpawnPositionComponent* m_pStartPosition;
   BETargetPositionComponent* m_pEndPosition;
   BEVelocityComponent* m_pVelosity;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__ASpawnTeamMoveNode__) */
