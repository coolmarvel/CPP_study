#pragma once
#include <iostream>

using namespace std;

class mainGame
{
private:
	int _hp;
	int _mp;

public:
	mainGame();
	//생성자 오버로딩
	mainGame(int hp);
	mainGame(int hp, int mp);
	~mainGame();

	
};

