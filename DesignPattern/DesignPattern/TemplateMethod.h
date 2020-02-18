// 模板方法
// 实例: 手榴弹和烟雾弹都经历飞行,爆炸,特效的过程
// 这些过程顺序相同,内容不同

#ifndef TEMPLATE_METHOD
#define TEMPLATE_METHOD

class ThrowWeapon
{
public:
	ThrowWeapon() {}

	void Init();
	virtual void Explode() {}
	virtual void PlayFX() {}
};

class ThrowWeapon_Grenade :public ThrowWeapon
{
public:
	ThrowWeapon_Grenade() {}

	virtual void Explode();
	virtual void PlayFX();
};

class ThrowWeapon_SmokeBomb :public ThrowWeapon
{
public:
	ThrowWeapon_SmokeBomb() {}

	virtual void Explode();
	virtual void PlayFX();
};

#endif