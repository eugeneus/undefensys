//
//  CEIComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/25/14.
//
//

#ifndef __ESF__CEIComponent__
#define __ESF__CEIComponent__

typedef int CEComponentTypeBit;

/* @brief Declares interface (pure abstract class) required
          for internal ESF functionality.
          You should add in implementation static member like
            static CEComponentTypeBit m_componentTypeBit;
          then implement virtul set/get methods to read write it
          these method will be used by engine to generate Type ID.
          The Type ID is required to identify componen-entity-system 
          logical relation
 */

class CEIComponent
{
public:
   virtual CEComponentTypeBit getCEComponentTypeBit() = 0;

   virtual void setCEComponentTypeBit(CEComponentTypeBit aComponentTypeBit) = 0;


};



#endif /* defined(__ESF__CEIComponent__) */
