// 适配器模式

// 实例: 召唤宠物狗的技能,直接复用AI工厂的代码

#include <iostream>
#include "AIFactory.h"

using namespace std;

# ifndef ADAPTER
#define ADAPTER

class SkillBase
{
public:
	SkillBase() {}

	virtual void OnReleaseSkill() {}
};

// 类适配器
class Skill_SummonPetDog :public SkillBase, private AIFactory
{
public:
	Skill_SummonPetDog() {}

	virtual void OnReleaseSkill() override;

	bool IsSummonSuccess();
};

// 对象适配器
class Skill_SummonPetCat :public SkillBase
{
public:
	Skill_SummonPetCat() = delete;
	Skill_SummonPetCat(AIFactory* inFactory);

	virtual void OnReleaseSkill() override;

private:
	AIFactory* Factory;
};

#endif