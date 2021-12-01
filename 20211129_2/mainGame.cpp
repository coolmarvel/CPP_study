#include "mainGame.h"

//생성자
mainGame::mainGame()
{
	_elfWarrior = new darkElfWarrior;

	_elfWarrior->QSkill();

}

//소멸자
mainGame::~mainGame()
{
	//new(동적할당) 했음 꼭  delete 로 메모리를 반환해주자 꼬옥!!! 꼭!!!
	delete _elfWarrior;
}
