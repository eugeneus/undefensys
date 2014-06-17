//
//  BEAIComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BEAIComponent__
#define __Cocos2DxFirstIosSample__BEAIComponent__

#include "CEComponent.h"

/*@brief AI Component intended to hold artuments of AI (State Component for finite state machine
  may hold State description object)
 */

class BEAIComponent : public CEComponent
{
   
public:
   BEAIComponent();
   ~BEAIComponent();
   static BEAIComponent* create();
public:
   
   // should be a set of AI properties?
   
};


#endif /* defined(__Cocos2DxFirstIosSample__BEAIComponent__) */
