#include "listTest.h"

listTest::listTest()
{
	//���������̳� �߿� �ϳ�
	//1���� �̻� �������϶��� ����Ʈ�� �����ϴ� 
	//������ ����, ���� �ÿ��� ���ͺ��� �����ϴ�


	//�ڷᱸ��
	//�ܹ��� ���� ����Ʈ
	//Single Linked List
	//����� ���� ����Ʈ
	//Double Linked List

	_lNum.push_back(1);
	_lNum.push_front(10);

	_lNum.insert(_lNum.begin(), 777);
	_lNum.insert(_lNum.end(), 333);

	for (_liNum = _lNum.begin(); _liNum != _lNum.end(); ++_liNum)
	{
		cout << *_liNum << endl;
	}

}

listTest::~listTest()
{
}
