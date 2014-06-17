//
//  BETargetPositionComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BETargetPositionComponent__
#define __Cocos2DxFirstIosSample__BETargetPositionComponent__

#include "CEComponent.h"

class BETargetPositionComponent : public CEComponent
{
public:
   BETargetPositionComponent(float anEndX = 0.0f, float anEndY = 0.0f);
   ~BETargetPositionComponent();
   static BETargetPositionComponent* create(float anEndX = 0.0f, float anEndY = 0.0f);
public:
   float m_endX;
   float m_endY;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__BETargetPositionComponent__) */
