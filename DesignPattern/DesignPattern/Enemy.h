// 创建出的敌人
#include <iostream>

using namespace std;

#ifndef ENEMY
#define ENEMY

class EnemyBase
{
public:
	EnemyBase() {};
};

class Enemy_Slime :public EnemyBase
{
public:
	Enemy_Slime()
	{
		cout << "创建史莱姆" << endl;
	}
};

class Enemy_Skeleton :public EnemyBase
{
public:
	Enemy_Skeleton()
	{
		cout << "创建骷髅兵" << endl;
	}
};

#endif
