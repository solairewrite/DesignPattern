#include "TemplateMethod.h"
#include <iostream>

using namespace std;

void ThrowWeapon::Init()
{
	cout << "抛出投掷武器" << endl;
	Explode();
	PlayFX();
}

void ThrowWeapon_Grenade::Explode()
{
	cout << "手榴弹爆炸" << endl;
}

void ThrowWeapon_Grenade::PlayFX()
{
	cout << "手榴弹爆炸特效" << endl;
}

void ThrowWeapon_SmokeBomb::Explode()
{
	cout << "烟雾弹爆炸" << endl;
}

void ThrowWeapon_SmokeBomb::PlayFX()
{
	cout << "烟雾弹爆炸特效" << endl;
}
