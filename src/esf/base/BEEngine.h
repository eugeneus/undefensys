//
//  BEEngine.h
//  Cocos2DxFirstIosSample
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#ifndef __Cocos2DxFirstIosSample__BEEngine__
#define __Cocos2DxFirstIosSample__BEEngine__

#include "CCObject.h"
#include "cocos2d.h"

class CESystemManager;
class CEEntityManager;

class BEEngine
{
private:
   CEEntityManager* m_em;
   CESystemManager* m_sm;
public:
   
   BEEngine();
   ~BEEngine();
   
   static BEEngine* createWithInitalCapacity(unsigned int aCapacity);
   
   virtual void update(float dt);
   
};

#endif /* defined(__Cocos2DxFirstIosSample__BEEngine__) */
