#include "pch.h"
#include "enemy.h"

HRESULT enemy::init()
{
	return S_OK;
}

HRESULT enemy::init(const char* imageName, POINT position)
{
	_currentFrameX = _currentFrmaeY = 0;
	_count = _fireCount = 0;
	//밀리세컨드라 최대 0.8초까지
	_rndFireCount = RND->getFromIntTo(1, 800);
	_imageName = IMAGEMANAGER->findImage(imageName);

	_rc = RectMakeCenter(position.x, position.y, _imageName->getFrameWidth(), _imageName->getFrameHeight());


	return S_OK;
}

void enemy::release()
{
}

void enemy::update()
{
	_count++;

	if (_count % 2 == 0)
	{
		if (_currentFrameX >= _imageName->getMaxFrameX()) _currentFrameX = 0;

		_imageName->setFrameX(_currentFrameX);
		_currentFrameX++;

		_count = 0;
	}
}

void enemy::render()
{
	_imageName->frameRender(getMemDC(), _rc.left, _rc.top, _currentFrameX, 0);
}

bool enemy::bulletCountFire()
{
	_fireCount++;

	if (_fireCount % _rndFireCount == 0)
	{
		_fireCount = 0;
		_rndFireCount = RND->getFromIntTo(1, 800);

		return true;
	}


	return false;
}
