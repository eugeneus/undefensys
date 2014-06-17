//
//  BEEngine.cpp
//  Cocos2DxFirstIosSample
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
	// create sustem manager
	// create entity manager
	//unsigned int initialCapacity = 100;
	pEngine->m_em = CEEntityManager::createWithInitalCapacity(aCapacity);
	pEngine->m_sm = CESystemManager::create(aCapacity, pEngine->m_em);
   
	return pEngine;
}

void BEEngine::update(float dt)
{
	m_sm->update(dt);
}

/*
 ECSystemManager::ECSystemManager(){}
 
 ECSystemManager::~ECSystemManager(){}
 
 ECSystemManager* ECSystemManager::create(unsigned int aCapacity, ECEntityManager* aEntityManager)
 {
 ECSystemManager* pSystemManager = new ECSystemManager();
 
 pSystemManager->m_entityManager = aEntityManager;
 pSystemManager->m_entityManager->retain();
 pSystemManager->m_systems = cocos2d::CCArray::createWithCapacity(aCapacity);
 
 return pSystemManager;
 
 }
 
 void ECSystemManager::addSystem(ECSystem* aSystem)
 {
 m_systems->addObject(aSystem);
 
 }
 
 void ECSystemManager::cleanUpSystems(void)
 {
 m_systems->removeAllObjects();
 
 }
 
 void ECSystemManager::updateSystemsNodes()
 {
 using namespace cocos2d;
 CCObject* pEntity = NULL;
 CCObject* pSystem = NULL;
 int requiredComponents = 0;
 int existingComponents = 0;
 
 cocos2d::CCArray* inactiveEntities = m_entityManager->inActiveEntities();
 if (inactiveEntities->count() > 0) {
 CCARRAY_FOREACH(m_systems, pSystem){
 requiredComponents = ((ECSystem*)pSystem)->requiredComponentTypes();
 CCARRAY_FOREACH(inactiveEntities, pEntity){
 existingComponents = ((ECEntity*)pEntity)->componentTypes();
 
 if ((existingComponents & requiredComponents) == requiredComponents) {
 ((ECSystem*)pSystem)->createNodeFromEntity(((ECEntity*)pEntity));
 m_entityManager->setEntityAsActiveted(((ECEntity*)pEntity));
 }
 
 }
 }
 }
 
 }
 
 void ECSystemManager::update(int dt)
 {
 
 updateSystemsNodes();
 
 cocos2d::CCObject* pSystem = NULL;
 {
 using namespace cocos2d;
 CCARRAY_FOREACH(m_systems, pSystem){
 ((ECSystem*)pSystem)->update(dt);
 }
 }
 
 }
 */



