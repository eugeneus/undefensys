//
//  BERenderComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__BERenderComponent__
#define __ESF__BERenderComponent__

#include "CEComponent.h"
#include "cocos2d.h"

class BERenderComponent : public CEComponent
{
public:
   
	BERenderComponent(cocos2d::Sprite* aSprite = NULL);
	~BERenderComponent();

   virtual CEComponentTypeBit getCEComponentTypeBit();

public:
   
   cocos2d::Sprite* _pSprite;

private:
   
   static CEComponentTypeBit _componentTypeBit;
   
};


#endif /* defined(__ESF__BERenderComponent__) */
