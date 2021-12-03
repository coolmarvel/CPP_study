#pragma once
#include "gameNode.h"
#include <vector>

struct tagBullet
{
	image* bulletImage;
	RECT rc;
	float x, y;
	float angle;
	float radius;
	float speed;
	float fireX, fireY;
	int count;
};

class bullet : public gameNode
{
private:
	vector<tagBullet> _vBullet;
	vector<tagBullet>::iterator _viBullet;

	const char* _imageName;
	float _range;
	int _bulletMax;

public:
	bullet() {};
	~bullet() {};

	HRESULT init(const char* imageName, int bulletMax, float range);
	void release();
	void update();
	void render();

	void fire(float x, float y, float speed);
	void move();

};

class daepodong : public gameNode
{
private:
	vector<tagBullet>			_vBullet;
	vector<tagBullet>::iterator _viBullet;

	float _range;		//사정거리(?)
	int _bulletMax;		//최대 몇 발 

public:
	daepodong() {};
	~daepodong() {};

	virtual HRESULT init(int missileMax, float range);
	virtual void release();
	virtual void update();
	virtual void render();

	//총알 생성 좀 부탁부탁~
	void fire(float x, float y);

	//만들었으면 나가줄래..
	void move();

	void removeMissile(int arrNum);

	vector<tagBullet> getVMissile() { return _vBullet; }

};