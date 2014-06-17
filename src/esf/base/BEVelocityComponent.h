//
//  BEVelocityComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BEVelocityComponent__
#define __Cocos2DxFirstIosSample__BEVelocityComponent__

#include "CEComponent.h"

class BEVelocityComponent : public CEComponent
{
public:
   BEVelocityComponent(float aX = 0.0f, float aY = 0.0f,float aXmax = 0.0f, float aYmax = 0.0f);
   ~BEVelocityComponent();

   virtual CEComponentTypeBit getCEComponentTypeBit();

public:
   
   float _vlX;  // in terms of cocos2d engine velosity is measured in points/sec
   float _vlY;
   float _vlXmax;
   float _vlYmax;

private:
   
   static CEComponentTypeBit _componentTypeBit;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__BEVelocityComponent__) */
