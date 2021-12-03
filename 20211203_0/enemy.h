#pragma once
#include "gameNode.h"

class enemy : public gameNode
{
protected:
	image* _imageName;
	RECT _rc;

	int _currentFrameX;
	int _currentFrmaeY;

	int _count;
	int _fireCount;
	int _rndFireCount;

public:
	enemy() {};
	~enemy() {};

	virtual HRESULT init();
	virtual HRESULT init(const char* imageName, POINT position);
	void release();
	void update();
	void render();

	bool bulletCountFire();	//랜덤하게 총알을 발사시킬 함수

	inline RECT getRect() { return _rc; }

};

