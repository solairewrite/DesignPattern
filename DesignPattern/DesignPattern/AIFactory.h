#include <iostream>

using namespace std;

#ifndef AIFACTORY
#define AIFACTORY

class AIFactory
{
public:
	AIFactory() {}

	void SpawnPetDog()
	{
		cout << "生成宠物狗" << endl;
	}

	void SpawnPetCat()
	{
		cout << "生成宠物猫" << endl;
	}

	bool IsSummonSuccess();
};

#endif