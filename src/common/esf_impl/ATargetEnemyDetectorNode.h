//
//  ATargetEnemyDetectorNode.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ATargetEnemyDetectorNode__
#define __Cocos2DxFirstIosSample__ATargetEnemyDetectorNode__

#include "CENode.h"
#include "BERenderComponent.h"
#include "BETeamTagComponent.h"


class ATargetEnemyDetectorNode : public CENode
{
public:
   
   ATargetEnemyDetectorNode(BERenderComponent* aRend,BETeamTagComponent* aTeamTag);
   ~ATargetEnemyDetectorNode();
   
   static ATargetEnemyDetectorNode* create(BERenderComponent* aRend,BETeamTagComponent* aTeamTag);
   
public:
   
   BERenderComponent* m_pRender;
   BETeamTagComponent* m_pTeamTag;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__ATargetEnemyDetectorNode__) */
