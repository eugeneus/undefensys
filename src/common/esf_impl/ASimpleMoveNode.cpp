//
//  ASimpleMoveNode.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/28/14.
//
//

#include "ASimpleMoveNode.h"

ASimpleMoveNode::ASimpleMoveNode(BEPositionComponent* aPos, BEVelocityComponent* aVel, BERenderComponent* aRend)
:m_pPosition(aPos)
,m_pVelocity(aVel)
,m_pRender(aRend)
{}

ASimpleMoveNode::~ASimpleMoveNode(){}

ASimpleMoveNode* ASimpleMoveNode::create(BEPositionComponent* aPos, BEVelocityComponent* aVel, BERenderComponent* aRend)
{
   ASimpleMoveNode* pNode = new ASimpleMoveNode(aPos,aVel,aRend);
   //pNode->autorelease();
   return pNode;
}


