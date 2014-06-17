//
//  CESystem.cpp
//  ESF (Entity System Foundation)
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

int CESystem::getNodeSetsCount() 
{
   return _nodeSets->size();
}

CEComponentTypeBit CESystem::getNodeTypeSetByIndex(int anIndex)
{
   return (_nodeSets->at(anIndex)).componentsTypeSet;
}

void CESystem::registerEntityForNodeTypeSetIndex(CEEntity* anIdleEntity, int anNodeTypeSetIndex)
{

}

/*
void CESystem::submitNode(CENode* aNode)
{
   _nodes->push_back(aNode);
}
*/


