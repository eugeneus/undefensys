//
//  CESystem.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "CESystem.h"
#include "CENode.h"
#include "CEEntity.h"



CESystem::CESystem(unsigned int aCapacity, int aRequiredComponentTypesMask)
:_requiredComponentTypesMask(aRequiredComponentTypesMask)
,_capacity(aCapacity)
{
   _nodes = new std::vector<CENode*>(aCapacity);
}

CESystem::~CESystem()
{
   _nodes->clear();
   delete _nodes;
}

CESystem* CESystem::create(unsigned int aCapacity, int aRequiredComponentTypesMask)
{
   CESystem* pSystem = new CESystem(aCapacity, aRequiredComponentTypesMask);
   return pSystem;
}

CEComponentTypeBit CESystem::requiredComponentTypes()
{
   return _requiredComponentTypesMask;
}

void CESystem::registerEntity(CEEntity* anEntity)
{
   
   
}

void CESystem::update(float dt)
{
   
}

/*
void CESystem::submitNode(CENode* aNode)
{
   _nodes->push_back(aNode);
}
*/

