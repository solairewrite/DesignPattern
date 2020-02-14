// 桥接模式,将抽象部分与实现部分分离,使他们都可以独立的变化

// 实例: 调用道具统一接口Use(),治疗道具治疗

#ifndef BRIDGE
#define BRIDGE

// 需要先声明,才能引用
class ItemImp;

// 道具接口
class Item
{
public:
	Item() = delete;
	Item(ItemImp* inImp) :_imp(inImp) {}

	virtual void Use() {}

protected:
	ItemImp* _imp;
};

class Item_Herb :public Item
{
public:
	Item_Herb() = delete;
	// 调用基类构造函数
	Item_Herb(ItemImp* inImp) :Item(inImp) {}

	virtual void Use() override;
};

// 道具实现
class ItemImp
{
public:
	ItemImp() {}

	virtual void PlayerUse() {}
};

class ItemImp_Heal :public ItemImp
{
public:
	ItemImp_Heal() {}

	virtual void PlayerUse() override;
};

#endif