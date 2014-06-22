//
//  UNEntityFactory.h
//  undefensys
//
//  Created by Eugene Johnson on 6/18/14.
//
//

#ifndef __undefensys__UNEntityFactory__
#define __undefensys__UNEntityFactory__

#include "cocos2d.h"
class CEEntity;

class UNEntityFactory
{
public:
   
   static CEEntity* defenceArea(float aXpos,float aYpos, cocos2d::Sprite& aSprite);
   
   static CEEntity* enemy1(float aXpos,float aYpos, cocos2d::Sprite& aSprite);
   
   static CEEntity* firePoint1(float aXpos,float aYpos, cocos2d::Sprite& aSprite);
   
private:
   /* @brief reads setting for an entity from persistence configuration
   */
   void getEntityDefaultsFromPersistence();

};

#endif /* defined(__undefensys__UNEntityFactory__) */
