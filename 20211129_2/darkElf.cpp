#include "darkElf.h"

darkElf::darkElf()
{
	_hp = 100;
	_mp = 50;
	_atk = 10;
	_speed = 3.5f;

	cout << "다크엘프의 체력 : " << _hp << endl;
	cout << "다크엘프의 마력 : " << _mp << endl;
	cout << "다크엘프의 공격력 : " << _atk << endl;
	cout << "다크엘프의 스피드 : " << _speed << endl;
}

darkElf::~darkElf()
{
}

void darkElf::QSkill()
{
	cout << "기본 엘프의 Q스킬 : 활쏘기" << endl;
}

void darkElf::WSkill()
{
	cout << "기본 엘프의 W스킬 : 연사" << endl;
}

void darkElf::ESkill()
{
	cout << "기본 엘프의 E스킬 : 매달리기" << endl;
}

void darkElf::RSkill()
{
	cout << "기본 엘프의 R스킬 : 암살백어택" << endl;
}
