#ifndef DEMO
#define DEMO

enum class EDesignPattern
{
	EAbstractFactory,
};

class EnemyFactoryBase;

class Demo
{
public:
	static void Demo_AbstractFactory();
	static void CreateProducts(EnemyFactoryBase* inFactory);
};

#endif
