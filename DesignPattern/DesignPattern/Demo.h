#ifndef DEMO
#define DEMO

enum class EDesignPattern
{
	// 创建型模式
	EAbstractFactory, // 工厂模式
	ESingleton, // 单例模式
};

class EnemyFactoryBase;

class Demo
{
public:
	// -------------------- 创建型模式 --------------------

	// 1,工厂模式
	static void Demo_AbstractFactory();
	static void CreateProducts(EnemyFactoryBase* inFactory);

	// 5,单例模式
	static void Demo_Singleton();
};

#endif
