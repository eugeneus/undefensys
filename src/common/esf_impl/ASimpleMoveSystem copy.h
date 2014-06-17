//
//  ASimpleMoveSystem.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/28/14.
//
//

#ifndef __Cocos2DxFirstIosSample__ASimpleMoveSystem__
#define __Cocos2DxFirstIosSample__ASimpleMoveSystem__

#include "EISystem.h"
class ASimpleMoveNode;

//template<class T>
template <typename T>
class ASimpleMoveSystem : public EISystem
{
public:
   ASimpleMoveSystem(unsigned int aCapacity = 0);
   ~ASimpleMoveSystem();
   static ASimpleMoveSystem* create(unsigned int aCapacity);
   virtual void registerEntity(CEEntity* anEntity);
   virtual void update(float dt);
public:
};

#endif /* defined(__Cocos2DxFirstIosSample__ASimpleMoveSystem__) */
