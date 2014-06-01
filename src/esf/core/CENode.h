//
//  CENode.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/18/14.
//
//

#ifndef __ESF__CENode__
#define __ESF__CENode__


/* @brief In simple case Node consists of number of Components from single entity.
 These Components are absolutely required for given System.
 In advanced scenario (collision, AI, A*) node may consists of components
 from different entities (enemies, realm, obstacles)
 */

class CENode
{
public:
   CENode();
   ~CENode();
   
   static CENode* create(void);
};

#endif /* defined(__ESF__CENode__) */
