//
//  CEComponent.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/25/14.
//
//

#include "CEComponent.h"

CEComponentTypeBit CEComponent::_nextComponentTypeBit = 0;

CEComponentTypeBit CEComponent::nextComponenTypeBit()
{
   return _nextComponentTypeBit;
}
