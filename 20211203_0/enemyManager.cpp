#include "pch.h"
#include "enemyManager.h"
#include "spaceShip.h" //전방선언 했으면 cpp 에 헤더파일을 꼭 임포트 해주자

HRESULT enemyManager::init()
{
    _bullet = new bullet;
    _bullet->init("bullet", 30, WINSIZEY);

    return S_OK;
}

void enemyManager::release()
{
}

void enemyManager::update()
{
    for (_viMinion = _vMinion.begin(); _viMinion != _vMinion.end(); ++_viMinion)
    {
        (*_viMinion)->update();
    }
    minionBulletFire();
    _bullet->update();
}

void enemyManager::render()
{
    for (_viMinion = _vMinion.begin(); _viMinion != _vMinion.end(); ++_viMinion)
    {
        (*_viMinion)->render();
    }
    _bullet->render();
}

void enemyManager::setMinion()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 6; j++)
        {
            enemy* ufo;
            ufo = new minion;
            ufo->init("enemy", PointMake(80 + j * 80, 80 + i * 100));
            //6마리씩 3열 == 18마리 찍으려고 해본것임
           
            _vMinion.push_back(ufo);
        }
    }
}

void enemyManager::minionBulletFire()
{
    for (_viMinion = _vMinion.begin(); _viMinion != _vMinion.end(); ++_viMinion)
    {
        if ((*_viMinion)->bulletCountFire())
        {
            //발사될 적(?) 위치 가져와서
            RECT rc = (*_viMinion)->getRect();

            _bullet->fire((rc.right + rc.left) / 2,
                rc.bottom + 5, 7.0f);
        }
    }
}

void enemyManager::removeMinion(int arrNum)
{
    _vMinion.erase(_vMinion.begin() + arrNum);
}
