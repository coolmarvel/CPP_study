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

	bool bulletCountFire();	//�����ϰ� �Ѿ��� �߻��ų �Լ�

	inline RECT getRect() { return _rc; }

};

