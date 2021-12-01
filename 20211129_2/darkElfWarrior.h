#pragma once
#include "darkElf.h"

class darkElfWarrior : public darkElf
{
public:
	darkElfWarrior();
	~darkElfWarrior();

	virtual void QSkill();
	virtual void WSkill();
	virtual void ESkill();
	virtual void RSkill();
};

