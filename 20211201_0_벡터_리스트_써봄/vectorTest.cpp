#include "vectorTest.h"

vectorTest::vectorTest()
{
	//벡터는 데이터를 푸쉬백 할때마다 여분의 메모리를 2배씩 잡아둔다.
	//(현재는 컴파일러 버전이 올라가서 1.5배 잡아둠)
	//벡터는 배열기반이라 데이터 1만개 이하일때 속도가 빠르다
	//삽입 삭제를 계속하게되면 퍼포먼스 저하가 일어난다


	//벡터에 데이터를 삽입하려면 push_back()
	//_vNum.push_back(1);
	_vNum.push_back(231);
	_vNum.push_back(5);

	//반복문으로 연속적으로 삽입도 된다
	for (int i = 0; i < 5; i++)
	{
		_vNum.push_back(i * 10);
	}

	//벡터 안에 데이터를 뒤에서부터 차곡차곡 빼내려면 pop_back()
	//_vNum.pop_back();

	//데이터를 중간에 삽입하고 싶다 하면 insert()
	_vNum.insert(_vNum.begin() + 3, 777);
	_vNum.insert(_vNum.end() - 2, 333);

	//데이터 중간에 것을 삭제하고 싶다 erase()
	_vNum.erase(_vNum.begin() + 5);
	_vNum.erase(_vNum.end() - 3);

	//컨테이너 안에 데이터를 싹 초기화 시키고싶다면 .clear()
	//_vNum.clear();

	//벡터 안에 데이터의 갯수를 알려면 size()
	cout << "벡터 안에 데이터 갯수 : " << _vNum.size() << endl;

	for (int i = 0; i < _vNum.size(); ++i)
	{
		cout << _vNum[i] << endl;
	}


}

vectorTest::~vectorTest()
{
}
