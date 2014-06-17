//
//  BETeamTagComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 5/10/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BETeamTagComponent__
#define __Cocos2DxFirstIosSample__BETeamTagComponent__

#include "CEComponent.h"

class BETeamTagComponent : public CEComponent
{
public:
   BETeamTagComponent(int aTag);
   ~BETeamTagComponent();
   static BETeamTagComponent* create(int aTag);
public:
   int m_tag;
   
};

#endif /* defined(__Cocos2DxFirstIosSample__BETeamTagComponent__) */
