#include "arraySample.h"

int main()
{
	arraySample<int> asi;

	asi.pushBack(1);
	asi.pushBack(3);
	asi.pushBack(7);
	asi.pushBack(777);
	asi.pushBack(5);

	for (int i = 0; i < asi.GetSize(); ++i)
	{
		cout << asi[i] << endl;
	}

	arraySample<const char*> asString;

	asString.pushBack("2시간 뒤면 점심이쥬");
	asString.pushBack("수요일이니까 한식부페집은 수육 나올겁니다");
	asString.pushBack("잠깐만~~");

	for (int i = 0; i < asString.GetSize(); ++i)
	{
		cout << asString[i] << endl;
	}


	return 0;
}