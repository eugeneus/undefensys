//
//  BEHealthComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BEHealthComponent__
#define __ESF__BEHealthComponent__

#include "CEComponent.h"

class BEHealthComponent : public CEComponent
{
public:
   BEHealthComponent(int aHealtLevel);
   
   ~BEHealthComponent();

   virtual CEComponentTypeBit getCEComponentTypeBit();

public:
   
   int _healthLevel;

private:
   
   static CEComponentTypeBit _componentTypeBit;
   
};


#endif /* defined(__ESF__BEVelocityComponent__) */
