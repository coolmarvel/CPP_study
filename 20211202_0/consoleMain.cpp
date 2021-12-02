#include <iostream>

using namespace std;

//struct == 구조체 == 객체(디폴트 접근제한지시자가 public인게 특징)
struct tagUnit
{
	const char* name;	//유닛의 이름
	int hp;				//유닛의 체력
	int atk;			//유닛의 공격력
};

//아래 함수 방식은 call by value 타입이기 때문에 체력이 바뀌지 않는다
//전투시키는 함수(방어자 이름, 체력, 공격자 이름, 공격력
//void battle(const char* name, int hp, const char* name2, int atk)
//{
//	cout << name2 << "은(는) " << name << "을 공격했다" << endl;
//	hp -= atk;
//
//	cout << name << "은(는) 체력이 " << hp << " 남았다" << endl;
//	cout << endl << endl;
//}

//전투시키는 함수(방어자 이름, 체력, 공격자 이름, 공격력
void battle(const char* name, int *hp, const char* name2, int atk)
{
	cout << name2 << "은(는) " << name << "을 공격했다" << endl;
	*hp -= atk;

	cout << name << "은(는) 체력이 " << *hp << " 남았다" << endl;
	cout << endl << endl;
}


int main()
{
	tagUnit dragoon;
	dragoon.name = "드라군";
	dragoon.hp = 100;
	dragoon.atk = 10;

	tagUnit vulture;
	vulture.name = "벌처";
	vulture.hp = 80;
	vulture.atk = 7;


	/* 체력의 변화가 없다
	battle(vulture.name, vulture.hp, dragoon.name, dragoon.atk);
	battle(dragoon.name, dragoon.hp, vulture.name, vulture.atk);

	battle(vulture.name, vulture.hp, dragoon.name, dragoon.atk);
	battle(dragoon.name, dragoon.hp, vulture.name, vulture.atk);
	*/

	//체력의 변화가 생긴다
	battle(vulture.name, &vulture.hp, dragoon.name, dragoon.atk);
	battle(dragoon.name, &dragoon.hp, vulture.name, vulture.atk);

	battle(vulture.name, &vulture.hp, dragoon.name, dragoon.atk);
	battle(dragoon.name, &dragoon.hp, vulture.name, vulture.atk);

	return 0;
}
