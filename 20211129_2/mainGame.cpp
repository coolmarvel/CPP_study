#include "mainGame.h"

//������
mainGame::mainGame()
{
	_elfWarrior = new darkElfWarrior;

	_elfWarrior->QSkill();

}

//�Ҹ���
mainGame::~mainGame()
{
	//new(�����Ҵ�) ���� ��  delete �� �޸𸮸� ��ȯ������ ����!!! ��!!!
	delete _elfWarrior;
}
