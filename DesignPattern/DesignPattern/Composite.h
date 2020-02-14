// 组合模式

// 实例: 一个大军团下面可以有若干小军团
// 小军团里面可以有若干更小的军团和若干士兵
// 统计整个军团的造价

#include <vector>
#include <string>

#ifndef COMPOSITE
#define COMPOSITE

// 部队
class Troop
{
public:
	Troop() {}

	virtual void Add(Troop* inArmy);
	virtual void Remove(Troop* inArmy);

	virtual void PrintNames();

	virtual int GetPrice();

protected:
	std::vector<Troop*> TroopArr;
};

// 单个士兵
class SingleSolider :public Troop
{
public:
	SingleSolider() = delete;
	SingleSolider(std::string inName) :name(inName) {}

	virtual void PrintNames() override;

	virtual int GetPrice() override { return 1; }

	std::string name;
};

#endif