#pragma once
#include <iostream>

using namespace std;

class mainGame
{
public:
	//�׳� ������ ����ϴ� �Լ�
	void UseItem();
	//������ ������ �Ҹ��ϴ� �Լ�
	void UseItem(int gas);

	//�����ε� : ��ü ������ ���� �̸� �Լ��� ���°� �ٸ��� ������ �ϴ� ��.
	//�������̵� : ��� ���迡�� �θ�Ŭ������ �ִ°��� �̸��� �Լ���
	//             �ڽ� ��ü���� ������ �ϴ� ��.

	mainGame();
	~mainGame();
};