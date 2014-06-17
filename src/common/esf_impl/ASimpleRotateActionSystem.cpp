//
//  ASimpleRotateActionSystem.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/2/14.
//
//

#include "CEEntity.h"
#include "ASimpleRotateActionSystem.h"
#include "ASimpleRotationActionNode.h"

ASimpleRotateActionSystem::ASimpleRotateActionSystem(unsigned int aCapacity)
:EISystem(kCEComponentTypeRend|kCEComponentTypeARot)
,m_capacity(aCapacity)
{
   m_pNodeChain = new std::vector<ASimpleRotationActionNode>();
   
}


ASimpleRotateActionSystem::~ASimpleRotateActionSystem()
{
   m_pNodeChain->clear();
   delete m_pNodeChain;
}

ASimpleRotateActionSystem* ASimpleRotateActionSystem::create(unsigned int aCapacity)
{
   ASimpleRotateActionSystem* pSystem = new  ASimpleRotateActionSystem(aCapacity);
   //pSystem->autorelease();
   return pSystem;
}

void ASimpleRotateActionSystem::registerEntity(CEEntity* anEntity)
{
   // check there is not such entity
   // create new node, assign required
   BERenderComponent* rend = (BERenderComponent*)(anEntity->componentByType(kCEComponentTypeRend));
   BERotationActionComponent* arot = (BERotationActionComponent*)(anEntity->componentByType(kCEComponentTypeARot));
   
   ASimpleRotationActionNode*  node = ASimpleRotationActionNode::create(
                                          rend,
                                          arot
                                          );
   node->retain();
   m_pNodeChain->push_back(*node);
   
}

void ASimpleRotateActionSystem::update(float dt)
{
   typename std::vector<ASimpleRotationActionNode>::const_iterator iNode;
   
   float rotateSpeed = 0.0f;
   float angle = 0.0f;
   float actionDuration = 0.0f;
   cocos2d::CCAction* action = NULL;
   for ( iNode = this->m_pNodeChain->begin(); iNode != this->m_pNodeChain->end(); ++iNode ){
      
      float tickMilices = timeMilisecTick();
      
      if(iNode->m_pRotator->m_nextTick <= tickMilices){
         
         rotateSpeed = iNode->m_pRotator->m_degreePerSec;
         angle = iNode->m_pRotator->m_angle;
         actionDuration = angle/rotateSpeed;
         iNode->m_pRotator->m_nextTick = tickMilices + actionDuration*1000;
         
         if (iNode->m_pRender->m_sprite->getActionByTag(1)) {
            iNode->m_pRender->m_sprite->stopActionByTag(1);
         }
         action = cocos2d::CCRotateBy::create(actionDuration, angle); // get actual angle from ccsprite?
         action->setTag(1);
         iNode->m_pRender->m_sprite->runAction(action);
         
      }
   }
}


