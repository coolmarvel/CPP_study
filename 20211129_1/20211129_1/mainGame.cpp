#include "mainGame.h"


mainGame::mainGame()
{
}

mainGame::~mainGame()
{
}

void mainGame::UseItem()
{
	cout << "아이템 사용" << endl;
}

void mainGame::UseItem(int gas)
{
	cout << gas << "를 소모하였습니다." << endl;
}
