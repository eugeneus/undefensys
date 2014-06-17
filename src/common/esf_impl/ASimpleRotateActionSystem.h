//
//  ASimpleRotateActionSystem.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/2/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ASimpleRotateActionSystem__
#define __Cocos2DxFirstIosSample__ASimpleRotateActionSystem__

#include "EISystem.h"
class ASimpleRotationActionNode;

/* @brief this system performs simple rotations of a sprite
         using cocs2d::CCRotateBy actinon
         requires
            - RenderConmonent
            - RotateActionComponent (contains isRunning, angleVelosity as degree per sec)
 cocos2dx::CCRotateBy example
 //CCAction *action = [CCSequence actions:
 //                    [CCRotateBy actionWithDuration:0.25 angle:-45],
 //                    [CCRotateBy actionWithDuration:0.5 angle:90],
 //                    [CCRotateBy actionWithDuration:0.25 angle:-45],
 //                    nil];
 //[theSprite runAction:action];

 
 */
class ASimpleRotateActionSystem : public EISystem
{
public:
   ASimpleRotateActionSystem(unsigned int aCapacity = 0);
   
   ~ASimpleRotateActionSystem();
   
   static ASimpleRotateActionSystem* create(unsigned int aCapacity);
   
   //virtual int requiredComponentTypes();
   
   virtual void registerEntity(CEEntity* anEntity);
   
   virtual void update(float dt);
   
protected:
   
   std::vector<ASimpleRotationActionNode>* m_pNodeChain;
   
   unsigned int m_capacity;

};

#endif /* defined(__Cocos2DxFirstIosSample__ASimpleRotateActionSystem__) */
