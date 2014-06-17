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

template <typename T>
ASimpleMoveSystem<T>::ASimpleMoveSystem(unsigned int aCapacity)
:CESystem<T>(aCapacity,kCEComponentTypePos||kCEComponentTypeVel||kCEComponentTypeRend)
{}

template <typename T>
ASimpleMoveSystem<T>::~ASimpleMoveSystem(){}

template <typename T>
ASimpleMoveSystem<T>* ASimpleMoveSystem<T>::create(unsigned int aCapacity)
{
   ASimpleMoveSystem* pSystem = new  ASimpleMoveSystem(aCapacity);
   pSystem->autorelease();
   return pSystem;
   
}

template <typename T>
void ASimpleMoveSystem<T>::registerEntity(CEEntity* anEntity)
{
   // check there is not such entity
   // create new node, assign required
   BEPositionComponent* aPos = (BEPositionComponent*)(anEntity->componentByType(kCEComponentTypePos));
   BEVelocityComponent* aVel = (BEVelocityComponent*)(anEntity->componentByType(kCEComponentTypeVel));
   BERenderComponent* aRend = (BERenderComponent*)(anEntity->componentByType(kCEComponentTypeRend));
   
   
   CESystem<T>::submitNode(ASimpleMoveNode::create(aPos, aVel, aRend));
   
   // STOP HERE: need CEComponent::getComonent(componentType)
}

template <typename T>
void ASimpleMoveSystem<T>::update(float dt)
{
   typename std::vector<ASimpleMoveNode>::iterator itr;
   for ( itr = CESystem<T>::m_nodeChain.begin(); itr != CESystem<T>::m_nodeChain.end(); ++itr ){
      // all logic for given system implemented here
   }
}

