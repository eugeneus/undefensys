//
//  ASimpleMoveNode.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/28/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ASimpleMoveNode__
#define __Cocos2DxFirstIosSample__ASimpleMoveNode__

#include "CENode.h"
#include "BEPositionComponent.h"
#include "BEVelocityComponent.h"
#include "BERenderComponent.h"

class ASimpleMoveNode : public CENode
{
public:
   
   ASimpleMoveNode(BEPositionComponent* aPos, BEVelocityComponent* aVel, BERenderComponent* aRend);
   ~ASimpleMoveNode();
   
   static ASimpleMoveNode* create(BEPositionComponent* aPos, BEVelocityComponent* aVel, BERenderComponent* aRend);
   
public:
   
   BEPositionComponent* m_pPosition;
   BEVelocityComponent* m_pVelocity;
   BERenderComponent*   m_pRender;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__ASimpleMoveNode__) */
