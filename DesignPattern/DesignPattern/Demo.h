#ifndef DEMO
#define DEMO

// 设计模式枚举,常用模式标记为 *
enum class EDesignPattern
{
	// 创建型模式
	EAbstractFactory, // * 工厂模式
	EBuilder, // 建造者模式
	EFactoryMethod, // * 工厂方法
	EPrototype, // 原型模式
	ESingleton, // 单例模式

	// 结构型模式
	EAdapter, // * 适配器模式
};

class EnemyFactoryBase;
class EnemyBuilderBase;

class Demo
{
public:
	// -------------------- 创建型模式 --------------------

	// 1,工厂模式
	static void Demo_AbstractFactory();
	static void CreateProducts(EnemyFactoryBase* inFactory);

	// 2,建造者模式
	static void Demo_Builder();
	static void BuildEnemy(EnemyBuilderBase& inBuilder);

	// 3,工厂方法
	static void Demo_FactoryMethod();

	// 4,原型模式
	static void Demo_Prototype();

	// 5,单例模式
	static void Demo_Singleton();

	// -------------------- 结构型模式 --------------------

	// 1,适配器模式
	static void Demo_Adapter();
};

#endif
