#ifndef __undefensys__GameEntity__
#define __undefensys__GameEntity__

#include "cocos2d.h"
#include <string.h>

using namespace std;

NS_CC_BEGIN

class CC_DLL GameEntity : public Ref
{
private:
    int uid;
    string name;
    int pos;
    
public:
    GameEntity();
    ~GameEntity();
};

NS_CC_END

#endif /* defined(__undefensys__GameEntity__) */
