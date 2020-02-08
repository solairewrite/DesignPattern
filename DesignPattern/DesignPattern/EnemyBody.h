#include <iostream>

using namespace std;

#ifndef ENEMY_BODY
#define ENEMY_BODY

class EnemyBodyBase
{
public:
	EnemyBodyBase() {}
};

class EnemyBody_Skeleton : public EnemyBodyBase
{
public:
	EnemyBody_Skeleton()
	{
		cout << "创建骷髅兵身体" << endl;
	}
};

#endif
