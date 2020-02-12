#include "FactoryMethod.h"

EnemyBase* EnemyCreatorBase::CreateEnemy() const
{
	return nullptr;
}

EnemyBase* EnemyCreator_Slime::CreateEnemy() const
{
	return new Enemy_Slime;
}
