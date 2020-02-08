#include "Builder.h"

EnemyBuilder_Skeleton::EnemyBuilder_Skeleton()
{
	Enemy = nullptr;
}

void EnemyBuilder_Skeleton::BuildEnemy()
{
	Enemy = new Enemy_Skeleton;
}

void EnemyBuilder_Skeleton::BuildHead()
{
	Enemy->Head = new EnemyHead_Skeleton;
}

void EnemyBuilder_Skeleton::BuildBody()
{
	Enemy->Body = new EnemyBody_Skeleton;
}

EnemyBase* EnemyBuilder_Skeleton::GetEnemy()
{
	return Enemy;
}
