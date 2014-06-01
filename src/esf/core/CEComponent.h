//
//  CEComponent.h
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 5/25/14.
//
//

#ifndef __ESF__CEComponent__
#define __ESF__CEComponent__

typedef int CEComponentTypeBit;

/* @brief Declares interface (pure abstract class) required
          for internal ESF functionality.
          You should add in derived class implementation static member like
            static CEComponentTypeBit m_componentTypeBit;
          then implement virtul get methods to read /lazy assignment it
          these method will be used by engine to generate Type ID.
          The Type ID is required to identify componen-entity-system 
          logical relation
         
          Implementation. Implements unque value generator for TypeID
 */

class CEComponent
{
public:
   virtual CEComponentTypeBit getCEComponentTypeBit() = 0;

   //virtual void setCEComponentTypeBit(CEComponentTypeBit aComponentTypeBit) = 0;

protected:
   //@brief returns next available TypeBit to register Compoment in ECM
   //       Register means to assign Type Bit to COmponent Class (not for object)
   static CEComponentTypeBit nextComponenTypeBit();

//private:
   // each subclass (not an object) shoud get its own ComponentTypeID (TypeBit)
   static CEComponentTypeBit _nextComponentTypeBit;


};

//



#endif /* defined(__ESF__CEComponent__) */
