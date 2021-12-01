#include "enemy.h"

enemy::enemy()
{
	_hp = 100;
	_atk = 8;
}

enemy::~enemy()
{
}

void enemy::printEnemy()
{
	cout << "에너미 체력 : " << _hp << endl;
	cout << "에너미 공격력 : " << _atk << endl;
}
