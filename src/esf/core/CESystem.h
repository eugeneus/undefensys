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
#include <map>

class CEEntity;
class CENode;

struct TNodeSetDescription
{
   CEComponentTypeBit componentsTypeSet;
   std::vector<CENode*> nodes;
};

class CESystem
{
public:
   
   CESystem(unsigned int aCapacity = 0, int aRequiredComponentTypesMask = -1);
   ~CESystem();
   
   static CESystem* create(unsigned int aCapacity, int aRequiredComponentTypesMask);
   
   /*@brief return bitmask of Components required by given System
    */
   virtual CEComponentTypeBit requiredComponentTypes();
   
   /* @bref specific implementaion of System should override this to
    have ability create a specific Node from an Entity;
    */
   virtual void registerEntity(CEEntity* anEntity);
   
   /*@brief specific implementation of the System should override this
    in order to procss specific Nodes
    */
   virtual void update(float dt);
   
   //void submitNode(T* aNode);
   
   int getNodeSetsCount();
   CEComponentTypeBit getNodeTypeSetByIndex(int anIndex);
   
   virtual void registerEntityForNodeTypeSetIndex(CEEntity* anIdleEntity, int anNodeTypeSetIndex);
   
protected:
   
   std::vector<CENode*>* _nodes;
   
   std::vector<TNodeSetDescription>* _nodeSets;
   
   std::map<CEComponentTypeBit, std::vector<CENode*>*>* _nodeSetsMap;
   
private:
   
   CEComponentTypeBit _requiredComponentTypesMask;
   unsigned int _capacity;
   
};


#endif /* defined(__ESF__CESystem__) */
