// 创建出的敌人
#include <iostream>
#include "EnemyHead.h"
#include "EnemyBody.h"
#include "Prototype.h"

using namespace std;

#ifndef ENEMY
#define ENEMY

class EnemyBase
{
public:
	EnemyBase() {};

	EnemyHeadBase* Head;
	EnemyBodyBase* Body;

	WeaponBase* Weapon;
	AwardBase* Award;
};

class Enemy_Slime :public EnemyBase
{
public:
	Enemy_Slime()
	{
		cout << "创建敌人:史莱姆" << endl;
	}
};

class Enemy_Skeleton :public EnemyBase
{
public:
	Enemy_Skeleton()
	{
		cout << "创建敌人:骷髅兵" << endl;
	}
};

#endif
