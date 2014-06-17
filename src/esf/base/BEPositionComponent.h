//
//  BEPositionComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BEPositionComponent__
#define __Cocos2DxFirstIosSample__BEPositionComponent__

#include "CEComponent.h"

/*@brief this component intendd to hold current position of Sprite
 */

class BEPositionComponent : public CEComponent
{
   
public:
   BEPositionComponent();
   ~BEPositionComponent();
   static BEPositionComponent* create(float aX, float aY);
public:
   float m_xPos;
   float m_yPos;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__BEPositionComponent__) */
