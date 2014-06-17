//
//  CEComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/25/14.
//
//

#include "CEComponent.h"
#include <assert.h>

CEComponentTypeBit CEComponent::_nextComponentTypeBit = (1 << 0);

CEComponentTypeBit CEComponent::nextComponenTypeBit()
{
   _nextComponentTypeBit = _nextComponentTypeBit << 1;
   assert(_nextComponentTypeBit); // terminate if maximum number of bits are shifted
   return _nextComponentTypeBit;
}
