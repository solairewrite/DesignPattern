#include "Prototype.h"
#include <iostream>
#include "Enemy.h"
#include "Award.h"

using namespace std;

WeaponBase::WeaponBase()
{
	Damage = 0;
}

WeaponBase::WeaponBase(const WeaponBase& inWeap)
{
	Damage = inWeap.Damage;
}

void WeaponBase::Init(int inDamage)
{
	Damage = inDamage;
}

WeaponBase* WeaponBase::Clone() const
{
	return new WeaponBase(*this);
}

int WeaponBase::GetDamage()
{
	return Damage;
}

Weapon_Sword::Weapon_Sword()
{
	cout << "创建武器:剑" << endl;
	Damage = 100;
}

Weapon_Bow::Weapon_Bow()
{
	cout << "创建武器:弓箭" << endl;
	Damage = 30;
}


SkeletonPrototypeFactory::SkeletonPrototypeFactory(WeaponBase* inWeap, AwardBase* inAward)
{
	PrototypeWeapon = inWeap;
	PrototypeAward = inAward;

}

Enemy_Skeleton* SkeletonPrototypeFactory::MakeSkeleton()
{
	Enemy_Skeleton* tPawn = new Enemy_Skeleton;

	tPawn->Weapon = PrototypeWeapon->Clone();
	tPawn->Award = PrototypeAward->Clone();

	return tPawn;
}