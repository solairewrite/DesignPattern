#include <iostream>

using namespace std;

#ifndef ENEMY_HEAD
#define ENEMY_HEAD

class EnemyHeadBase
{
public:
	EnemyHeadBase() {}
};

class EnemyHead_Skeleton :public EnemyHeadBase
{
public:
	EnemyHead_Skeleton()
	{
		cout << "创建骷髅兵的头部" << endl;
	}
};

#endif
