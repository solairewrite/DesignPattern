#include "Adapter.h"

bool AIFactory::IsSummonSuccess()
{
	return true;
}

void Skill_SummonPetDog::OnReleaseSkill()
{
	SpawnPetDog();
}

// 适配器实现的常用方法:直接转发
bool Skill_SummonPetDog::IsSummonSuccess()
{
	return AIFactory::IsSummonSuccess();
}

Skill_SummonPetCat::Skill_SummonPetCat(AIFactory* inFactory)
{
	Factory = inFactory;
}

void Skill_SummonPetCat::OnReleaseSkill()
{
	Factory->SpawnPetDog();
}
