#include "listTest.h"

listTest::listTest()
{
	//연관컨테이너 중에 하나
	//1만개 이상 데이터일때는 리스트가 유리하다 
	//데이터 삽입, 삭제 시에도 벡터보다 유리하다


	//자료구조
	//단방향 연결 리스트
	//Single Linked List
	//양방향 연결 리스트
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
