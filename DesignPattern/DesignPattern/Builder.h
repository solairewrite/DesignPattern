// 建造者模式

// 相关模式: 与工厂模式相似
// 建造者模式着重于一步一步构建一个复杂对象
// 工厂模式着重于创建一系列的所有产品

// 实例: 仅传入一个参数(建造器),即可创建指定产品,产品有各个组成部件
// 传入骷髅兵建造器, 创建一个完整的骷髅兵,包括头部,身体

#include "Enemy.h"

#ifndef BUILDER
#define BUILDER

class EnemyBuilderBase
{
public:
	virtual void BuildEnemy() {}
	virtual void BuildHead() {}
	virtual void BuildBody() {}

	virtual EnemyBase* GetEnemy() { return nullptr; }

protected:
	EnemyBuilderBase() {};

	EnemyBase* Enemy;
};

class EnemyBuilder_Skeleton :public EnemyBuilderBase
{
public:
	EnemyBuilder_Skeleton();

	virtual void BuildEnemy();
	virtual void BuildHead();
	virtual void BuildBody();

	virtual EnemyBase* GetEnemy();
};

#endif