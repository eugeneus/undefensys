//
//  ATSimpleMoveSystem.cpp
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/17/14.
//
//

#include "ATSimpleMoveSystem.h"

ATSimpleMoveSystem::ATSimpleMoveSystem(unsigned int aCapacity)
:CESystem(kCEComponentTypePos|kCEComponentTypeVel|kCEComponentTypeRend)
{
   //m_nodeChain = new std::vector<ASimpleMoveNode>();
   
}


ATSimpleMoveSystem::~ATSimpleMoveSystem()
{
   //m_nodeChain->clear();
   //delete m_nodeChain;
}


ATSimpleMoveSystem* ATSimpleMoveSystem::create(unsigned int aCapacity)
{
   ATSimpleMoveSystem* pSystem = new  ATSimpleMoveSystem(aCapacity);
   //pSystem->autorelease();
   return pSystem;
}


template<>
void CESystem<ASimpleMoveNode>::registerEntity(CEEntity* anEntity)
{
   ASimpleMoveNode* aNode = NULL;
   //CESystem<ASimpleMoveNode>::submitNode(aNode);
   
   //CESystem<ASimpleMoveNode>::m_nodeChain.push_back(*aNode);
}

template<>
void CESystem<ASimpleMoveNode>::update(float dt)
{
      
}


