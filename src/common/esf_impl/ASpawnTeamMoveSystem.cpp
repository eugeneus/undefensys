//
//  ASpawnTeamMoveSystem.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "ASpawnTeamMoveSystem.h"
#include "ASpawnTeamMoveNode.h"
#include "BERenderComponent.h"
#include "BESpawnPositionComponent.h"
#include "BETargetPositionComponent.h"
#include "BEVelocityComponent.h"

#include "cocos2d.h"
#include "CEEntity.h"

ASpawnTeamMoveSystem::ASpawnTeamMoveSystem()
:EISystem(kCEComponentTypeRend|kCEComponentTypeSpawnPos|kCEComponentTypeTargPos|kCEComponentTypeVel) // to be defined!
{
   m_nodeChain = new std::vector<ASpawnTeamMoveNode>();
   
}


ASpawnTeamMoveSystem::~ASpawnTeamMoveSystem()
{
   m_nodeChain->clear();
   delete m_nodeChain;
}

ASpawnTeamMoveSystem* ASpawnTeamMoveSystem::create()
{
   ASpawnTeamMoveSystem* pSystem = new  ASpawnTeamMoveSystem();
   //pSystem->autorelease();
   return pSystem;
}

void ASpawnTeamMoveSystem::registerEntity(CEEntity* anEntity)
{
   // check there is not such entity
   // create new node, assign required
   BERenderComponent* pRend = (BERenderComponent*)(anEntity->componentByType(kCEComponentTypeRend));
   BESpawnPositionComponent* pStartPos = (BESpawnPositionComponent*)(anEntity->componentByType(kCEComponentTypeSpawnPos));
   BETargetPositionComponent* pEndPos = (BETargetPositionComponent*)(anEntity->componentByType(kCEComponentTypeTargPos));
   BEVelocityComponent* pVel = (BEVelocityComponent*)(anEntity->componentByType(kCEComponentTypeVel));
   
   ASpawnTeamMoveNode*  node = ASpawnTeamMoveNode::create(pRend,pStartPos,pEndPos,pVel);
   
   node->retain();
   m_nodeChain->push_back(*node);
   
}

void ASpawnTeamMoveSystem::update(float dt)
{
   typename std::vector<ASpawnTeamMoveNode>::const_iterator iNode;
   
   // use position component to store spawn position
   // if sprite->position < spawn position
   //       return   // action in process
   // if sprite->position == parget position
   //    sprite-> stopAction
   //    update position to new spawn pos (random)
   //    udate velocity to new value
   //    set delay to new spawn delay
   //    sprite->position = spawn
   // if sprite->position == spawn && delay > 0
   //      delay - dt
   // else
   //       calc line and velocity
   //       sprite->runAction
   
   float xCurrPos = 0.0f;
   float xStartPos = 0.0f;
   float yStartPos = 0.0f;
   float xEndPos = 0.0f;
   float yEndPos = 0.0f;
   float actionDuration = 0.0f;
   cocos2d::CCPoint targetPoint;
   cocos2d::CCSize winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
   cocos2d::CCAction* action = NULL;
   int nActs = 0;
   //cocos2d::CCAction* action1 = NULL;
   size_t Nodes = m_nodeChain->size();
   for ( iNode = this->m_nodeChain->begin(); iNode != this->m_nodeChain->end(); ++iNode ){
      // all logic for given system implemented here
      xCurrPos = iNode->m_pRender->m_sprite->getPositionX();
      xStartPos = iNode->m_pStartPosition->m_startX;
      xEndPos = iNode->m_pEndPosition->m_endX;
      
      if (xCurrPos < xStartPos && xCurrPos > xEndPos) {
         continue; // action in process
      }
      
      if (xCurrPos <= xEndPos) { // target achieved
         
         //rendomly Update startPos component
         yStartPos = EISystem::randomValueBetween(10.0f, winSize.height - 10.0f);
         iNode->m_pStartPosition->m_startY = yStartPos;
         iNode->m_pStartPosition->m_delaySecs = EISystem::randomValueBetween(0.1f, 0.9f);
         // update sprite
         
         nActs = 0;
         while (iNode->m_pRender->m_sprite->getActionByTag(100)) {
            CCLOG("Actions %d",nActs++);
            iNode->m_pRender->m_sprite->stopActionByTag(100);
         };
         
         //iNode->m_pRender->m_sprite->stopAllActions();
         //action1 = ;
         iNode->m_pRender->m_sprite->setPositionX(xStartPos+ 20.0f);
         iNode->m_pRender->m_sprite->setPositionY(yStartPos);
         // randomly update velocity
         iNode->m_pVelosity->m_vX = EISystem::randomValueBetween(50.0f, 180.0f);
         //randomly update target pos
      }
      
      if (xCurrPos >= xStartPos) {
         // sprite at strt position waits for new move
         
         if ((iNode->m_pStartPosition->m_delaySecs -= dt) <= 0.0f) {
            iNode->m_pStartPosition->m_delaySecs = 0.0f;
            
            actionDuration = (xStartPos - xEndPos)/iNode->m_pVelosity->m_vX;
            xEndPos = iNode->m_pEndPosition->m_endX;
            yEndPos = iNode->m_pEndPosition->m_endY;
            targetPoint = cocos2d::CCPoint(xEndPos, yEndPos);
            
            
            if (!(iNode->m_pRender->m_sprite->getActionByTag(100))) {
               action = cocos2d::CCMoveTo::create(actionDuration, targetPoint);
               action->setTag(100);
               iNode->m_pRender->m_sprite->runAction(action);
            }
            
            
            //action1 = iNode->m_pRender->m_sprite->getActionByTag(100);
         }
      }
   }
}


