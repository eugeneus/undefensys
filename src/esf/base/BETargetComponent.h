//
//  BETargetComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BETargetComponent__
#define __Cocos2DxFirstIosSample__BETargetComponent__

#include "CEComponent.h"

/*@brief Target Component represents to hold position of any target
 */

class BETargetComponent : public CEComponent
{
   
public:
   BETargetComponent();
   ~BETargetComponent();
   static BETargetComponent* create();
public:
   float m_xPos;
   float m_yPos;
   
};


#endif /* defined(__Cocos2DxFirstIosSample__BETargetComponent__) */
