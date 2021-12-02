#include "mapTest.h"

mapTest::mapTest()
{
	//pair<자료형1, 자료형2>(실제넣을키값, 실제넣을값)
	//make_pair(실제넣을키값, 실제넣을값) 알아서 자료형 찾아서 넣어준다
	_mapTest.insert(pair<const char*, int>("석훈", 3));
	_mapTest.insert(pair<const char*, int>("준형", 5));
	_mapTest.insert(pair<const char*, int>("해민", 8));
	_mapTest.insert(pair<const char*, int>("혜린", 7));

	_mi = _mapTest.find("혜린");

	//맵 컨테이너 안에 키값이 존재하면
	if (_mi != _mapTest.end())
	{
		cout << _mi->first << "(이)가 좋아하는 숫자는 " << _mi->second << " 입니다" << endl;
	}
	else
	{
		cout << "맵 안에는 그런 키 값은 존재하지 않는데요?" << endl;
	}

}

mapTest::~mapTest()
{
}
