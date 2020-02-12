﻿#include "Singleton.h"

// 静态变量的初始化
Singleton* Singleton::_instance = nullptr;

Singleton* Singleton::Instance()
{
	if (_instance == nullptr)
	{
		_instance = new Singleton;
	}
	return _instance;
}
