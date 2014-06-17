//
//  ASimpleMoveSystem.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/28/14.
//
//

#include "ASimpleMoveSystem.h"
#include "ASimpleMoveNode.h"
#include "cocos2d.h"
#include "CEEntity.h"
#include <vector>

ASimpleMoveSystem::ASimpleMoveSystem(unsigned int aCapacity)
:EISystem(kCEComponentTypePos|kCEComponentTypeVel|kCEComponentTypeRend)
,m_capacity(aCapacity)
{
   m_nodeChain = new std::vector<ASimpleMoveNode>();
   
}


ASimpleMoveSystem::~ASimpleMoveSystem()
{
   m_nodeChain->clear();
   delete m_nodeChain;
}

ASimpleMoveSystem* ASimpleMoveSystem::create(unsigned int aCapacity)
{
   ASimpleMoveSystem* pSystem = new  ASimpleMoveSystem(aCapacity);
   //pSystem->autorelease();
   return pSystem;
}

void registerEntityForRequiredComponetsMask(CEEntity* anEntity)
{
/*   if (aRequiredComponentsMask == m_requiredComponensMasks[0]) {
      create node type1
      add to storage list1
   }
   else{
      create node type2
      add to storage list2
   
   }
 */
}

void ASimpleMoveSystem::registerEntity(CEEntity* anEntity)
{
   // check there is not such entity
   // create new node, assign required
   BEPositionComponent* aPos = (BEPositionComponent*)(anEntity->componentByType(kCEComponentTypePos));
   BEVelocityComponent* aVel = (BEVelocityComponent*)(anEntity->componentByType(kCEComponentTypeVel));
   BERenderComponent* aRend = (BERenderComponent*)(anEntity->componentByType(kCEComponentTypeRend));
   
   ASimpleMoveNode*  node = ASimpleMoveNode::create(aPos, aVel, aRend);
   node->retain();
   m_nodeChain->push_back(*node);
   
}

void ASimpleMoveSystem::update(float dt)
{
   typename std::vector<ASimpleMoveNode>::const_iterator iNode;
   
   float xPos = 0.0f;
   float xD = 0.0f;
   for ( iNode = this->m_nodeChain->begin(); iNode != this->m_nodeChain->end(); ++iNode ){
      // all logic for given system implemented here
      xPos = iNode->m_pPosition->m_xPos;
      xD = iNode->m_pVelocity->m_vX * dt;
      xPos -= iNode->m_pVelocity->m_vX * dt;
      
      if (xPos < -(iNode->m_pRender->m_sprite->getContentSize().width)) {
         cocos2d::CCSize winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
         xPos = winSize.width + iNode->m_pRender->m_sprite->getContentSize().width/2;
      }
      iNode->m_pPosition->m_xPos = xPos;
      iNode->m_pRender->m_sprite->setPositionX(xPos);
   }
}

