#pragma once
#include "gameNode.h"
#include <vector>
#include "minion.h"
#include "bullets.h"
//#include "minion2.h"
//#include "boss.h"

//전방선언
class spaceShip;

class enemyManager : public gameNode
{
private:
	typedef vector<enemy*>				vEnemy;
	typedef vector<enemy*>::iterator	viEnemy;

private:
	vEnemy _vMinion;
	viEnemy _viMinion;

	bullet* _bullet;

	spaceShip* _ship;

public:
	enemyManager() {};
	~enemyManager() {};

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	//미니언 셋팅(?)
	void setMinion();

	void minionBulletFire();

	//객체한테 지워달라고 전달할 함수
	void removeMinion(int arrNum);

	vector<enemy*> getVMinion() { return _vMinion; }
	vector<enemy*>::iterator getVIMinion() { return _viMinion; }

};

