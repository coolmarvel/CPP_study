#include "mainGame.h"

mainGame::mainGame()
{
	_hp = 100;
	_mp = 50;
}

mainGame::mainGame(int hp)
{
	_hp = hp;
	_mp = 50;
	//비주얼 스튜디오도 버전 올라가면서 변수 초기화에 굉장히 엄격해지네유
	//녹색줄로 경고해주는거 봐바
}

//멤버 이니셜라이즈 - 원래는 const 인자를 초기화하기 위한 수단인데 
//					 편하다보니.. 그만...
mainGame::mainGame(int hp, int mp)
	: _hp(hp), _mp(mp)
{
	int num = 3; //C언어 대입연산자
	int num2(5); //C++ 괄호로 변수 초기화 가능
}

mainGame::~mainGame()
{
}
