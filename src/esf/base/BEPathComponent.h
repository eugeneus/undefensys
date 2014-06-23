//
//  BEPathComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BEPathComponent__
#define __ESF__BEPathComponent__

#include "CEComponent.h"

/*@brief Path Component intended to hold movement path of any sprite
 */

class BEPathComponent : public CEComponent
{
   
public:
   BEPathComponent();
   ~BEPathComponent();
   static BEPathComponent* create();
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
      //TODO: should be Array of points, index of last arrived poing, next arriving point
      //       probably besire path arguments
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

};


#endif /* defined(__ESF__BEPathComponent__) */
