//
//  CEEntity.h
//  ESF
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__CEEntity__
#define __ESF__CEEntity__

#include "CEComponent.h"
#include <vector>

/** @brief: CEEntity is just a list of Components
 */
class CEEntity
{
public:
   
   CEEntity(void);
   
   ~CEEntity(void);
   
   static CEEntity* createWithInitialCapacity(unsigned int aCapacity);
   
   //@brief gets Component Type from aComponent
   virtual void addComponent(CEComponent* aCmponent);
   
   virtual CEComponent* componentByType(CEComponentTypeBit aComponentTypeBit);
   
   virtual void removeComponentOfType(CEComponentTypeBit aComponentTypeBit);
   
   /*@brief returns what component types are part of the Entity
    */
   virtual CEComponentTypeBit componentTypesBitMask();
   
   virtual std::vector<CEComponent*>* componentsList(int componentsCount); // fake parameter
   
   /*@brief an Entity Manager uses these functions to set entity id which is equal to
            index position in manager's vector(s)
    */
   virtual void setEntityID(int anEntityID);
   
   virtual int getEntityID();

private:
   
   int _entityID;

   CEComponentTypeBit _componentTypesBitMask; // bitmask of Components which are part of an Entity
   
   std::vector<CEComponent*>* _components;
   typename std::vector<CEComponent*>::const_iterator _iComponentRef;
   
};

#endif /* defined(__ESF__CEEntity__) */