//
//  ASimpleRotationActionNode.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#include "ASimpleRotationActionNode.h"

ASimpleRotationActionNode::ASimpleRotationActionNode(BERenderComponent* aRend,BERotationActionComponent* aARot)
:m_pRender(aRend)
,m_pRotator(aARot)
{}

ASimpleRotationActionNode::~ASimpleRotationActionNode()
{
   m_pRender = NULL;
   m_pRotator = NULL;
}

ASimpleRotationActionNode* ASimpleRotationActionNode::create(BERenderComponent* aRend,BERotationActionComponent* aARot)
{
   ASimpleRotationActionNode* pNode = new ASimpleRotationActionNode(aRend,aARot);
   //pNode->autorelease();
   return pNode;

}


