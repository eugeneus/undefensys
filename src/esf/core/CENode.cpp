//
//  CENode.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/18/14.
//
//

#include "CENode.h"

CENode::CENode(){}

CENode::~CENode(){}

CENode* CENode::create(void)
{
   CENode* pNode = new CENode();
   //pNode->autorelease();
   return pNode;
}
