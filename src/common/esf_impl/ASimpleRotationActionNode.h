//
//  ASimpleRotationActionNode.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ASimpleRotationActionNode__
#define __Cocos2DxFirstIosSample__ASimpleRotationActionNode__

#include "CENode.h"
#include "BERenderComponent.h"
#include "BERotationActionComponent.h"

class ASimpleRotationActionNode : public CENode
{
public:
   
   ASimpleRotationActionNode(BERenderComponent* aRend,BERotationActionComponent* aARot);
   ~ASimpleRotationActionNode();
   
   static ASimpleRotationActionNode* create(BERenderComponent* aRend,BERotationActionComponent* aARot);
   
public:
   
   BERenderComponent* m_pRender;
   BERotationActionComponent* m_pRotator;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__ASimpleRotationActionNode__) */
