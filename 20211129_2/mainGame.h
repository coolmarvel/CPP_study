#pragma once
#include "darkElfWarrior.h"

class mainGame
{
private:
	//동적할당을 하기위해서 객체를 선언만 해놓은 상태 (메모리는  NULL 값이다)
	darkElfWarrior* _elfWarrior;


public:
	mainGame();
	~mainGame();

};

