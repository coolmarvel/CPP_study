#include "vectorTest.h"

vectorTest::vectorTest()
{
	//���ʹ� �����͸� Ǫ���� �Ҷ����� ������ �޸𸮸� 2�辿 ��Ƶд�.
	//(����� �����Ϸ� ������ �ö󰡼� 1.5�� ��Ƶ�)
	//���ʹ� �迭����̶� ������ 1���� �����϶� �ӵ��� ������
	//���� ������ ����ϰԵǸ� �����ս� ���ϰ� �Ͼ��


	//���Ϳ� �����͸� �����Ϸ��� push_back()
	//_vNum.push_back(1);
	_vNum.push_back(231);
	_vNum.push_back(5);

	//�ݺ������� ���������� ���Ե� �ȴ�
	for (int i = 0; i < 5; i++)
	{
		_vNum.push_back(i * 10);
	}

	//���� �ȿ� �����͸� �ڿ������� �������� �������� pop_back()
	//_vNum.pop_back();

	//�����͸� �߰��� �����ϰ� �ʹ� �ϸ� insert()
	_vNum.insert(_vNum.begin() + 3, 777);
	_vNum.insert(_vNum.end() - 2, 333);

	//������ �߰��� ���� �����ϰ� �ʹ� erase()
	_vNum.erase(_vNum.begin() + 5);
	_vNum.erase(_vNum.end() - 3);

	//�����̳� �ȿ� �����͸� �� �ʱ�ȭ ��Ű��ʹٸ� .clear()
	//_vNum.clear();

	//���� �ȿ� �������� ������ �˷��� size()
	cout << "���� �ȿ� ������ ���� : " << _vNum.size() << endl;

	for (int i = 0; i < _vNum.size(); ++i)
	{
		cout << _vNum[i] << endl;
	}


}

vectorTest::~vectorTest()
{
}
