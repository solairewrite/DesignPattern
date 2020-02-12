// 原型模式

// 相关模式: 与工厂模式竞争
// 如果n个产品中的1个(产品A)需要改变,工厂模式需要创建新的子类工厂
// 原型模式只需修改产品A对应的原型参数

// 实例: 创建骷髅兵,武器-剑,  奖励-金币
//		 创建骷髅兵,武器-弓箭,奖励-骨头

#ifndef PROTOTYPE
#define PROTOTYPE

class Enemy_Skeleton;
class AwardBase;

class WeaponBase
{
public:
	WeaponBase();
	WeaponBase(const WeaponBase& inWeap);

	virtual void Init(int inDamage);
	virtual WeaponBase* Clone() const;

	int GetDamage();

protected:
	int Damage;
};

class Weapon_Sword :public WeaponBase
{
public:
	Weapon_Sword();
};

class Weapon_Bow :public WeaponBase
{
public:
	Weapon_Bow();
};

class SkeletonPrototypeFactory
{
public:
	SkeletonPrototypeFactory(WeaponBase* inWeap, AwardBase* inAward);

	SkeletonPrototypeFactory() = delete; // 禁用默认构造器

	Enemy_Skeleton* MakeSkeleton();

private:
	WeaponBase* PrototypeWeapon;
	AwardBase* PrototypeAward;
};

#endif
