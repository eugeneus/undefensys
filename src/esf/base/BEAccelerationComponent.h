//
//  BEAccelerationComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/22/14.
//
//

#ifndef __ESF__BEAccelerationComponent__
#define __ESF__BEAccelerationComponent__

#include "CEComponent.h"

class BEAccelerationComponent : public CEComponent
{
public:
   BEAccelerationComponent();
   ~BEAccelerationComponent();
   static BEAccelerationComponent* create();
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   float m_x;
   float m_y;

private:
   
   static CEComponentTypeBit _componentTypeBit;

};



#endif /* defined(__ESF__BEAccelerationComponent__) */
