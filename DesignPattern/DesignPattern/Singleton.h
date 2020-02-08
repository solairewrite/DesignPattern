// 单例模式
// 可以有子类

#ifndef SINGLETON
#define SINGLETON

class Singleton
{
public:
	static Singleton* Instance();

protected:
	Singleton() {};

private:
	static Singleton* _instance;
};

#endif
