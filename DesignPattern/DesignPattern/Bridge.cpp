#include "Bridge.h"
#include <iostream>

using namespace std;

void Item_Herb::Use()
{
	// 将客户的请求转发给它的实现对象
	if (_imp != nullptr)
	{
		_imp->PlayerUse();
	}
}

void ItemImp_Heal::PlayerUse()
{
	cout << "玩家使用了治疗道具" << endl;
}
