//
//  BEAIComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BEAIComponent__
#define __ESF__BEAIComponent__

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
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   
   // should be a set of AI properties?
   
private:
   
   static CEComponentTypeBit _componentTypeBit;
   
};


#endif /* defined(__ESF__BEAIComponent__) */
