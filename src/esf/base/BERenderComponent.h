//
//  BERenderComponent.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BERenderComponent__
#define __Cocos2DxFirstIosSample__BERenderComponent__

#include "CEComponent.h"
#include "cocos2d.h"

class BERenderComponent : public CEComponent
{
public:
   
	BERenderComponent();
	~BERenderComponent();
   
	/* @brief
    */
   static BERenderComponent* create(cocos2d::CCSprite* aSprite);
   
public:
   
   cocos2d::CCSprite* m_sprite;
};


#endif /* defined(__Cocos2DxFirstIosSample__BERenderComponent__) */
