//
//  BETargetComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BETargetComponent__
#define __ESF__BETargetComponent__

#include "CEComponent.h"

/*@brief Target Component represents to hold position of any target
 */

class BETargetComponent : public CEComponent
{
   
public:
   BETargetComponent();
   ~BETargetComponent();
   static BETargetComponent* create();
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   float m_xPos;
   float m_yPos;
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};


#endif /* defined(__ESF__BETargetComponent__) */
