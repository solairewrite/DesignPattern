#include "AbstractFactory.h"
#include <iostream>

using namespace std;

EnemyBase* EnemyFactoryBase::CreateEnemy() const
{
	return nullptr;
}

AwardBase* EnemyFactoryBase::CreateAward() const
{
	return nullptr;
}

EnemyFactory_Slime::EnemyFactory_Slime()
{
	cout << "新建史莱姆工厂" << endl;
}

EnemyBase* EnemyFactory_Slime::CreateEnemy() const
{
	return new Enemy_Slime;
}

AwardBase* EnemyFactory_Slime::CreateAward() const
{
	return new Award_Coin;
}

EnemyFactory_Skeleton::EnemyFactory_Skeleton()
{
	cout << "创建骷髅兵工厂" << endl;
}

EnemyBase* EnemyFactory_Skeleton::CreateEnemy() const
{
	return new Enemy_Skeleton;
}

AwardBase* EnemyFactory_Skeleton::CreateAward() const
{
	return new Award_Bone;
}