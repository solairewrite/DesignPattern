// 工厂方法

// 相关模式: 工厂模式经常用工厂方法实现

// 实例: 新建指定创的建器,创建指定的敌人
// 用史莱姆创建器创建史莱姆

#include <iostream>
#include "Enemy.h"

using namespace std;

#ifndef Creator_METHOD
#define Creator_METHOD

class EnemyCreatorBase
{
public:
	EnemyCreatorBase() {};

	virtual EnemyBase* CreateEnemy() const;
};

class EnemyCreator_Slime : public EnemyCreatorBase
{
public:
	EnemyCreator_Slime()
	{
		cout << "新建史莱姆创建器" << endl;
	}

	virtual EnemyBase* CreateEnemy() const;
};

#endif
