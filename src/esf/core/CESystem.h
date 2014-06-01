//
//  CESystem.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __ESF__CESystem__
#define __ESF__CESystem__

#include "CEComponent.h"
//#include "CEEntity.h"
//#include "CENode.h"
#include <vector>

class CEEntity;
class CENode;

class CESystem
{
public:
   
   CESystem(unsigned int aCapacity = 0, int aRequiredComponentTypesMask = -1);
   ~CESystem();
   
   static CESystem* create(unsigned int aCapacity, int aRequiredComponentTypesMask);
   
   /*@brief return bitmask of Components required by given System
    */
   virtual CEComponentTypeBit requiredComponentTypes();
   
   /* @bref specific implementaion of System should pverride this to
    have ability create a specific Node from an Entity;
    */
   virtual void registerEntity(CEEntity* anEntity);
   
   /*@brief specific implementation of the System should override this
    in order to procss specific Nodes
    */
   virtual void update(float dt);
   
   //void submitNode(T* aNode);
   
protected:
   
   std::vector<CENode*>* _nodes;
   
private:
   
   CEComponentTypeBit _requiredComponentTypesMask;
   unsigned int _capacity;
   
};


#endif /* defined(__ESF__CESystem__) */
