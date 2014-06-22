//
//  BETeamTagComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#ifndef __ESF__BETeamTagComponent__
#define __ESF__BETeamTagComponent__

#include "CEComponent.h"

class BETeamTagComponent : public CEComponent
{
public:
   BETeamTagComponent(int aTag);
   ~BETeamTagComponent();
   static BETeamTagComponent* create(int aTag);
   virtual CEComponentTypeBit getCEComponentTypeBit();
public:
   int m_tag;
   
   
private:
   
   static CEComponentTypeBit _componentTypeBit;

   
};

#endif /* defined(__ESF__BETeamTagComponent__) */
