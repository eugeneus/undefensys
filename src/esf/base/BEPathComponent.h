//
//  BEPathComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BEPathComponent__
#define __Cocos2DxFirstIosSample__BEPathComponent__

#include "CEComponent.h"

/*@brief Path Component intended to hold movement path of any sprite
 */

class BEPathComponent : public CEComponent
{
   
public:
   BEPathComponent();
   ~BEPathComponent();
   static BEPathComponent* create();
public:
      //TODO: should be Array of points, index of last arrived poing, next arriving point
      //       probably besire path arguments
};


#endif /* defined(__Cocos2DxFirstIosSample__BEPathComponent__) */
