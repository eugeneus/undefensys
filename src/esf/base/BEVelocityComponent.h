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
   BEVelocityComponent();
   ~BEVelocityComponent();
   static BEVelocityComponent* create(float avX, float avY);
public:
   
   float m_vX;  // in terms of cocos2d engine velosity is measured in points/sec
   float m_vY;
   float m_vXmax;
   float m_vYmax;
};


#endif /* defined(__Cocos2DxFirstIosSample__BEVelocityComponent__) */
