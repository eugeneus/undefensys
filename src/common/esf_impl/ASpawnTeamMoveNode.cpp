//
//  ASpawnTeamMoveNode.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "ASpawnTeamMoveNode.h"

ASpawnTeamMoveNode::ASpawnTeamMoveNode(BERenderComponent* aRend,
                                       BESpawnPositionComponent* aStartPos,
                                       BETargetPositionComponent* anEndPos,
                                       BEVelocityComponent* aVel
                                       )
:m_pRender(aRend)
,m_pStartPosition(aStartPos)
,m_pEndPosition(anEndPos)
,m_pVelosity(aVel)
{}

ASpawnTeamMoveNode::~ASpawnTeamMoveNode(){}

ASpawnTeamMoveNode* ASpawnTeamMoveNode::create(BERenderComponent* aRend,
                                               BESpawnPositionComponent* aStartPos,
                                               BETargetPositionComponent* anEndPos,
                                               BEVelocityComponent* aVel
                                               )
{
   ASpawnTeamMoveNode* pNode = new ASpawnTeamMoveNode(aRend,aStartPos,anEndPos,aVel);
   //pNode->autorelease();
   return pNode;
}

