//
//  ATargetEnemyDetectorSystem.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ATargetEnemyDetectorSystem__
#define __Cocos2DxFirstIosSample__ATargetEnemyDetectorSystem__

#include "EISystem.h"
class ATargetEnemyDetectorNode;

class ATargetEnemyDetectorSystem : public EISystem
{
public:
   
   ATargetEnemyDetectorSystem();
   
   ~ATargetEnemyDetectorSystem();
   
   static ATargetEnemyDetectorSystem* create();
   
   virtual void registerEntity(CEEntity* anEntity);
   
   virtual void update(float dt);
   
protected:
   
   std::vector<ATargetEnemyDetectorNode>* m_nodeChain;
   
   typename std::vector<ATargetEnemyDetectorNode>::const_iterator m_iNode;
   
   typename std::vector<ATargetEnemyDetectorNode>::const_iterator m_iNodeE;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__ATargetEnemyDetectorSystem__) */
