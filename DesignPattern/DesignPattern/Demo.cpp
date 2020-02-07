#include <iostream>
#include "Demo.h"
#include "AbstractFactory.h"
#include "Enemy.h"
#include "Singleton.h"

using namespace std;

void Demo::Demo_AbstractFactory()
{
	cout << "工厂模式" << endl;

	cout << endl;
	cout << "创建史莱姆:先创建史莱姆工厂,然后将史莱姆工厂作为参数,调用工厂函数" << endl;
	EnemyFactory_Slime* SlimeFactory = new EnemyFactory_Slime;
	CreateProducts(SlimeFactory);

	cout << endl;
	cout << "创建骷髅兵:先创建骷髅兵工厂,然后将骷髅兵工厂作为参数,调用工厂函数" << endl;
	EnemyFactory_Skeleton* SkeletonFactory = new EnemyFactory_Skeleton;
	CreateProducts(SkeletonFactory);
}

void Demo::CreateProducts(EnemyFactoryBase* inFactory)
{
	EnemyBase* Enemy = inFactory->CreateEnemy();
	AwardBase* Award = inFactory->CreateAward();
}

void Demo::Demo_Singleton()
{
	Singleton::Instance();
}
