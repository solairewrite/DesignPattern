// 工厂模式

// 相关模式: 工厂类用工厂方法实现,工厂通常是单例

// 实例: 仅需改变一个参数(工厂),即可创建指定系列的所有产品
// 传入史莱姆工厂,创建 敌人-史莱姆, 奖励-金币
// 传入骷髅兵工厂,创建 敌人-骷髅兵, 奖励-骨头

#include "Enemy.h"
#include "Award.h"

#ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY

class EnemyFactoryBase
{
public:
	EnemyFactoryBase() {};

	virtual EnemyBase* CreateEnemy() const;
	virtual AwardBase* CreateAward() const;
};

class EnemyFactory_Slime : public EnemyFactoryBase
{
public:
	EnemyFactory_Slime();

	virtual EnemyBase* CreateEnemy() const;
	virtual AwardBase* CreateAward() const;
};

class EnemyFactory_Skeleton : public EnemyFactoryBase
{
public:
	EnemyFactory_Skeleton();

	virtual EnemyBase* CreateEnemy() const;
	virtual AwardBase* CreateAward() const;
};

#endif
