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
	//���־� ��Ʃ����� ���� �ö󰡸鼭 ���� �ʱ�ȭ�� ������ ������������
	//����ٷ� ������ִ°� ����
}

//��� �̴ϼȶ����� - ������ const ���ڸ� �ʱ�ȭ�ϱ� ���� �����ε� 
//					 ���ϴٺ���.. �׸�...
mainGame::mainGame(int hp, int mp)
	: _hp(hp), _mp(mp)
{
	int num = 3; //C��� ���Կ�����
	int num2(5); //C++ ��ȣ�� ���� �ʱ�ȭ ����
}

mainGame::~mainGame()
{
}
