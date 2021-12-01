#pragma once
#include <iostream>
#include <vector>	//벡터 라는 STL 컨테이너를 쓰려면 인클루드 해주자

using namespace std;

class vectorTest
{
private:
	vector<int>				_vNum;
	vector<int>::iterator	_viNum;

public:
	vectorTest();
	~vectorTest();

};

