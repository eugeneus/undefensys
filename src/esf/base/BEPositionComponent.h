//
//  BEPositionComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BEPositionComponent__
#define __ESF__BEPositionComponent__

#include "CEComponent.h"

/*@brief this component intendd to hold current position of Sprite
 */

class BEPositionComponent : public CEComponent
{
   
public:
   
   BEPositionComponent(float aX = 0.0f, float aY = 0.0f);
                       
   ~BEPositionComponent();
   
   virtual CEComponentTypeBit getCEComponentTypeBit();
   
public:
   float _x;
   float _y;
   
private:
   
   static CEComponentTypeBit _componentTypeBit;
   
   
};

#endif /* defined(__ESF__BEPositionComponent__) */
