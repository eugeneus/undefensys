//
//  ATargetEnemyDetectorNode.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#include "ATargetEnemyDetectorNode.h"

ATargetEnemyDetectorNode::ATargetEnemyDetectorNode(BERenderComponent* aRend,BETeamTagComponent* aTeamTag)
:m_pRender(aRend)
//,m_pRotator(aARot)
{}

ATargetEnemyDetectorNode::~ATargetEnemyDetectorNode()
{
   m_pRender = NULL;
   //m_pRotator = NULL;
}

ATargetEnemyDetectorNode* ATargetEnemyDetectorNode::create(BERenderComponent* aRend,BETeamTagComponent* aTeamTag)
{
   ATargetEnemyDetectorNode* pNode = new ATargetEnemyDetectorNode(aRend,aTeamTag);
   //pNode->autorelease();
   return pNode;
   
}
