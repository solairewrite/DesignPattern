// 装饰模式
// 动态的给对象增加额外的功能
// 实例: 为百夫长增加大炮和喷火器

#ifndef DECORATOR
#define DECORATOR

// 机械组件
class MachineComp
{
public:
	MachineComp() {};
	virtual void Fire() {};
};

// 装饰器,维护对组件的引用,在构造器中传入组件,可以层层嵌套
class MachineDecorator :public MachineComp
{
public:
	MachineDecorator() = delete;
	MachineDecorator(MachineComp* inComp) :Comp(inComp) {}

	virtual void Fire()
	{
		if (Comp)
		{
			Comp->Fire();
		}
	}

protected:
	MachineComp* Comp;
};

class Cannon :public MachineDecorator
{
public:
	Cannon() = delete;
	// 子类调用父类构造器
	Cannon(MachineComp* inComp) :MachineDecorator(inComp) {}

	virtual void Fire();
};

class FlameThrower :public MachineDecorator
{
public:
	FlameThrower() = delete;
	FlameThrower(MachineComp* inComp) :MachineDecorator(inComp) {}

	virtual void Fire();
};

#endif