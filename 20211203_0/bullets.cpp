#include "pch.h"
#include "bullets.h"

HRESULT daepodong::init(int missileMax, float range)
{
	//� ��ü���� �󸶸�ŭ 
	_bulletMax = missileMax;
	_range = range;

	return S_OK;
}

void daepodong::release()
{
}

void daepodong::update()
{
	move();
}

void daepodong::render()
{
	for (_viBullet = _vBullet.begin(); _viBullet != _vBullet.end(); ++_viBullet)
	{
		//�̹��� �׷��ִ� ��ġ ����� ���� 
		_viBullet->bulletImage->frameRender(getMemDC(),
			_viBullet->rc.left,
			_viBullet->rc.top,
			_viBullet->bulletImage->getFrameX(), 0);

		_viBullet->count++;

		if (_viBullet->count % 5 == 0)
		{
			_viBullet->bulletImage->setFrameX(_viBullet->bulletImage->getFrameX() + 1);

			//�̹��� �ε����� �ִ� �̹��� ����� �Ѿ�� �ٽ� 0���� �ʱ�ȭ �ؼ� �̹��� ���� ��Ű�� �κ�
			if (_viBullet->bulletImage->getFrameX() >= _viBullet->bulletImage->getMaxFrameX())
			{
				_viBullet->bulletImage->setFrameX(0);
			}

			_viBullet->count = 0;
		}
	}
}

void daepodong::fire(float x, float y)
{
	//���;ȿ� ��� �ڷ᰹�� == �Ѿ˰��� == �ִ��Ѿ˰������� �� �����Ƿ����ϸ� ����
	if (_bulletMax < _vBullet.size()) return;


	tagBullet bullet;
	ZeroMemory(&bullet, sizeof(tagBullet));

	bullet.bulletImage = new image;
	bullet.bulletImage->init("missile.bmp", 416, 64, 13, 1, true, RGB(255, 0, 255));
	bullet.speed = 6.0f;
	bullet.x = bullet.fireX = x;
	bullet.y = bullet.fireY = y;
	bullet.rc = RectMakeCenter(bullet.x, bullet.y,
		bullet.bulletImage->getFrameWidth(),
		bullet.bulletImage->getFrameHeight());

	_vBullet.push_back(bullet);

}

void daepodong::move()
{
	for (_viBullet = _vBullet.begin(); _viBullet != _vBullet.end(); )
	{
		_viBullet->y -= _viBullet->speed;
		_viBullet->rc = RectMakeCenter(_viBullet->x, _viBullet->y,
			_viBullet->bulletImage->getFrameWidth(),
			_viBullet->bulletImage->getFrameHeight());
		//erase()�� �ߵ��Ǹ� ���ͷ����͸� ���� �� ���� �� ������ �Ű��ִ� ����� �ִ�
		//�׷��� ���ͷ����Ϳ� �ٽ� �����ؼ� ���ͷ������� ��ġ�� ����ȭ ������߸� 
		//�޸� ���� ���� �ʴ´�.

		if (_range < getDistance(_viBullet->x, _viBullet->y, _viBullet->fireX, _viBullet->fireY))
		{
			SAFE_RELEASE(_viBullet->bulletImage);
			SAFE_DELETE(_viBullet->bulletImage);

			//�ش��ϴ� �Ѿ��� ���� �����̳� ���ο��� ������
			_viBullet = _vBullet.erase(_viBullet);
		}
		else ++_viBullet;
		
		//���ﶧ �����ϰ�� ����ؼ� Ž�����ش�. ��� Ž���ϸ� ���� ����ȭ ��ġ������ ����
	}
}

void daepodong::removeMissile(int arrNum)
{
	_vBullet.erase(_vBullet.begin() + arrNum);
}

HRESULT bullet::init(const char* imageName, int bulletMax, float range)
{
	_imageName = imageName;
	_bulletMax = bulletMax;
	_range = range;

	return S_OK;
}

void bullet::release()
{
}

void bullet::update()
{
	move();
}

void bullet::render()
{
	for (_viBullet = _vBullet.begin(); _viBullet != _vBullet.end(); ++_viBullet)
	{
		_viBullet->bulletImage->render(getMemDC(), _viBullet->rc.left, _viBullet->rc.top);
	}
}

void bullet::fire(float x, float y, float speed)
{
	if (_bulletMax < _vBullet.size()) return;

	tagBullet bullet;
	ZeroMemory(&bullet, sizeof(tagBullet));
	bullet.bulletImage = IMAGEMANAGER->findImage(_imageName);
	bullet.speed = speed;
	bullet.radius = bullet.bulletImage->getWidth() / 2;
	bullet.x = bullet.fireX = x;
	bullet.y = bullet.fireY = y;
	
	bullet.rc = RectMakeCenter(bullet.x, bullet.y,
		bullet.bulletImage->getWidth(),
		bullet.bulletImage->getHeight());

	_vBullet.push_back(bullet);
}

void bullet::move()
{
	for (_viBullet = _vBullet.begin(); _viBullet != _vBullet.end();)
	{
		_viBullet->y += _viBullet->speed;

		_viBullet->rc = RectMakeCenter(_viBullet->x, _viBullet->y,
			_viBullet->bulletImage->getWidth(),
			_viBullet->bulletImage->getHeight());

		if (_range < getDistance(_viBullet->x, _viBullet->y, _viBullet->fireX, _viBullet->fireY))
		{
			_viBullet = _vBullet.erase(_viBullet);
		}
		else ++_viBullet;

	}
}
