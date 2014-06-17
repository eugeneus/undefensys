//
//  BEEngine.cpp
//  ESF (Entity System Foundation)
//
//  Created by Eugene Johnson on 4/20/14.
//
//

#include "BEEngine.h"
#include "CEEntityManager.h"
#include "CESystemManager.h"


BEEngine::BEEngine(){}
BEEngine::~BEEngine(){}

BEEngine* BEEngine::createWithInitalCapacity(unsigned int aCapacity)
{
   
	BEEngine* pEngine = new BEEngine();
	pEngine->_pEm = CEEntityManager::createWithInitalCapacity(aCapacity);
	pEngine->_pSm = CESystemManager::create(pEngine->_pEm, aCapacity);
   
	return pEngine;
}

void BEEngine::update(float dt)
{
	_pSm->update(dt);
}

void BEEngine::addEntity(CEEntity* anEntity)
{
   _pEm->addEntity(anEntity);
}

void BEEngine::addSystem(CESystem* aSystem)
{
   _pSm->addSystem(aSystem);
}


