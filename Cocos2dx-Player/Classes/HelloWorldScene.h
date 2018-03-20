#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
using namespace cocos2d;
class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
	void update(float dt) override;
	void updateCustom(float dt);

	void hitByMonster();

	bool attackMonster();

	void yClickCallback(cocos2d::Ref* pSender);
	void wClickCallback(cocos2d::Ref* pSender);
	void aClickCallback(cocos2d::Ref* pSender);
	void sClickCallback(cocos2d::Ref* pSender);
	void dClickCallback(cocos2d::Ref* pSender);
private:
	cocos2d::Sprite* player;
	cocos2d::Vector<SpriteFrame*> attack;
	cocos2d::Vector<SpriteFrame*> dead;
	cocos2d::Vector<SpriteFrame*> run;
	cocos2d::Vector<SpriteFrame*> idle;
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;
	cocos2d::Label* time;
	int dtime;
	cocos2d::ProgressTimer* pT;
	float perc;
};

#endif // __HELLOWORLD_SCENE_H__
