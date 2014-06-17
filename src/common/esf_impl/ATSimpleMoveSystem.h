//
//  ATSimpleMoveSystem.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/17/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ATSimpleMoveSystem__
#define __Cocos2DxFirstIosSample__ATSimpleMoveSystem__

#include "CESystem.h"
#include "CENode.h"
#include "CEComponent.h"
#include "CEEntity.h"
#include "ASimpleMoveNode.h"

template<>
class ATSimpleMoveSystem : public CESystem<ASimpleMoveNode>
{
public:
   
   ATSimpleMoveSystem(unsigned int aCapacity);
   
   ~ATSimpleMoveSystem();
   
   ATSimpleMoveSystem* create(unsigned int aCapacity);
   
   /*@brief return bitmask of Components required by given System
    */
   virtual int requiredComponentTypes();
   
   /* @bref specific implementaion of System should pverride this to
    have ability create a specific Node from an Entity;
    */
   virtual void registerEntity(CEEntity* anEntity);
   
   /*@brief specific implementation of the System should override this
    in order to procss specific Nodes
    */
   virtual void update(float dt);
   
   void submitNode(ASimpleMoveNode* aNode);
   
   //protected:
   
protected:
   
   
   
private:
   
};



#endif /* defined(__Cocos2DxFirstIosSample__ATSimpleMoveSystem__) */
