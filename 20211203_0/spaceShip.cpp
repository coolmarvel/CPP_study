#include "pch.h"
#include "spaceShip.h"
#include "enemyManager.h"

HRESULT spaceShip::init()
{
	_ship = IMAGEMANAGER->addImage("플레이어", "rocket.bmp", 52, 64, true, RGB(255, 0, 255));
	_ship->setX(WINSIZEX / 2);
	_ship->setY(WINSIZEY / 2 + 200);

	_dpd = new daepodong;
	_dpd->init(30, 400);

	return S_OK;
}

void spaceShip::release()
{
}

void spaceShip::update()
{
	if (KEYMANAGER->isStayKeyDown(VK_LEFT) && _ship->getX() > 0)
	{
		_ship->setX(_ship->getX() - 5);
	}

	if (KEYMANAGER->isStayKeyDown(VK_RIGHT) && _ship->getX() + _ship->getWidth()< WINSIZEX )
	{
		_ship->setX(_ship->getX() + 5);
	}

	if (KEYMANAGER->isStayKeyDown(VK_UP) && _ship->getY() > 0)
	{
		_ship->setY(_ship->getY() - 5);
	}

	if (KEYMANAGER->isStayKeyDown(VK_DOWN) && _ship->getY() + _ship->getHeight() < WINSIZEY)
	{
		_ship->setY(_ship->getY() + 5);
	}
	if (KEYMANAGER->isOnceKeyDown(VK_SPACE)) _dpd->fire(_ship->getCenterX(), _ship->getY());

	_dpd->update();

	collision();
}

void spaceShip::render()
{
	_ship->render(getMemDC(), _ship->getX(), _ship->getY());
	_dpd->render();
}

void spaceShip::collision()
{
	for (int i = 0; i < _dpd->getVMissile().size(); ++i)
	{
		for (int j = 0; j < _em->getVMinion().size(); ++j)
		{
			// 충돌체크하는 함수가 존재함
			RECT temp;
			RECT rc = _em->getVMinion()[j]->getRect();

			if (IntersectRect(&temp, &_dpd->getVMissile()[i].rc, &rc))
			{
				_dpd->removeMissile(i);
				_em->removeMinion(j);
				break;
			}
		}
	}

}
