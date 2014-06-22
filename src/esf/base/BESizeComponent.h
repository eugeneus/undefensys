//
//  BESizeComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BESizeComponent__
#define __ESF__BESizeComponent__

#include "CEComponent.h"

class BESizeComponent : public CEComponent
{
public:
   BESizeComponent();
   ~BESizeComponent();
   static BESizeComponent* create();
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   
   float m_height;
   float m_width;
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};


#endif /* defined(__ESF__BESizeComponent__) */
