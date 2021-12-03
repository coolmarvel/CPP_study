#pragma once
#include "gameNode.h"
#include "bullets.h"

class enemyManager;

class spaceShip : public gameNode
{
private:
	image* _ship;
	daepodong* _dpd;

	enemyManager* _em;

public:
	spaceShip() {};
	~spaceShip() {};

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	void collision();

	void setEmMemoryAddressLink(enemyManager* em) { _em = em; }

};

