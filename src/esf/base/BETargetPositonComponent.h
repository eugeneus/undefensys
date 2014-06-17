//
//  BETargetPositonComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/3/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BETargetPositonComponent__
#define __Cocos2DxFirstIosSample__BETargetPositonComponent__

#include "CEComponent.h"

class BETargetPositonComponent : public CEComponent
{
public:
   BETargetPositonComponent(float anEndX = 0.0f, float anEndY = 0.0f);
   ~BETargetPositonComponent();
   static BETargetPositonComponent* create(float anEndX = 0.0f, float anEndY = 0.0f);
public:
   float m_endX;
   float m_endY;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__BETargetPositonComponent__) */
