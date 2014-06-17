//
//  ATargetEnemyDetectorSystem.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#include "ATargetEnemyDetectorSystem.h"

//#include "ASimpleMoveSystem.h"
#include "ATargetEnemyDetectorNode.h"
#include "cocos2d.h"
#include "CEEntity.h"
//#include <vector>

ATargetEnemyDetectorSystem::ATargetEnemyDetectorSystem()
:EISystem(kCEComponentTypePos|kCEComponentTypeVel|kCEComponentTypeRend|kCEComponentTypeTeamTag)
{
   m_nodeChain = new std::vector<ATargetEnemyDetectorNode>();
   
}


ATargetEnemyDetectorSystem::~ATargetEnemyDetectorSystem()
{
   m_nodeChain->clear();
   delete m_nodeChain;
}

ATargetEnemyDetectorSystem* ATargetEnemyDetectorSystem::create()
{
   ATargetEnemyDetectorSystem* pSystem = new  ATargetEnemyDetectorSystem();
   //pSystem->autorelease();
   return pSystem;
}

void ATargetEnemyDetectorSystem::registerEntity(CEEntity* anEntity)
{
   // check there is not such entity
   // create new node, assign required
   BERenderComponent* aRend = (BERenderComponent*)(anEntity->componentByType(kCEComponentTypeRend));
   BETeamTagComponent* aTeamTag = (BETeamTagComponent*)(anEntity->componentByType(kCEComponentTypeTeamTag));
   
   ATargetEnemyDetectorNode*  node = ATargetEnemyDetectorNode::create(aRend,aTeamTag);
   node->retain();
   m_nodeChain->push_back(*node);
   
}

void ATargetEnemyDetectorSystem::update(float dt)
{
   float xPosD = 0.0f;
   float xPosE = 0.0f;
   float xD = 0.0f;
   int teamTag = 0;
   for ( m_iNode = this->m_nodeChain->begin(); m_iNode != this->m_nodeChain->end(); ++m_iNode ){
      teamTag = m_iNode->m_pTeamTag->m_tag;
      for (m_iNodeE = this->m_nodeChain->begin(); m_iNodeE != this->m_nodeChain->end(); ++m_iNodeE) {
         if (teamTag == m_iNodeE->m_pTeamTag->m_tag) {
            continue;
         }
         
      }
   }
}

