#pragma once
#include "gameNode.h"
#include "spaceShip.h"
#include "enemyManager.h"

class playGround : public gameNode
{
private:
	spaceShip* _ship;
	enemyManager* _em;

public:
	playGround();
	~playGround();

	virtual HRESULT init();	//�ʱ�ȭ �Լ� 
	virtual void release();	//�޸� ���� �Խ�
	virtual void update();	//�����ϴ� �Լ�
	virtual void render();	//�׸��� �Լ�

	
};
