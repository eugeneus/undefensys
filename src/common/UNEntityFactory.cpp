//
//UNEntityFactory.cpp
//  undefensys
//
//  Created by Eugene Johnson on 6/18/14.
//
//

#include "UNEntityFactory.h"
#include "CEComponent.h"
#include "CEEntity.h"
#include "BEPositionComponent.h"
#include "BERenderComponent.h"
#include "BEHealthComponent.h"

void UNEntityFactory::getEntityDefaultsFromPersistence()
{

}

CEEntity* UNEntityFactory::defenceArea(float aXpos,float aYpos, cocos2d::Sprite& aSprite)
{
   //TODO: may ge get defaults/specifics from preference/settings
   // getEntityDefaultsFromPersistence()
   
   CEEntity* newEntity = new CEEntity();
   newEntity->addComponent(new BEPositionComponent(aXpos,aYpos));
   newEntity->addComponent(new BERenderComponent(&aSprite));
   newEntity->addComponent(new BEHealthComponent(10));
   return newEntity;
}

CEEntity* UNEntityFactory::enemy1(float aXpos,float aYpos, cocos2d::Sprite& aSprite)
{
   //TODO: may ge get defaults/specifics from preference/settings
   // getEntityDefaultsFromPersistence()
   
   CEEntity* newEntity = new CEEntity();
   newEntity->addComponent(new BEPositionComponent(aXpos,aYpos));
   newEntity->addComponent(new BERenderComponent(&aSprite));
   newEntity->addComponent(new BEHealthComponent(10));
   return newEntity;
}

CEEntity* UNEntityFactory::firePoint1(float aXpos,float aYpos, cocos2d::Sprite& aSprite)
{
   //TODO: may ge get defaults/specifics from preference/settings
   // getEntityDefaultsFromPersistence()

   CEEntity* newEntity = new CEEntity();
   newEntity->addComponent(new BEPositionComponent(aXpos,aYpos));
   newEntity->addComponent(new BERenderComponent(&aSprite));
   newEntity->addComponent(new BEHealthComponent(10));
   return newEntity;
}
