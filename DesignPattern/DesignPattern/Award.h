// 创建出的奖励
#ifndef AWARD
#define AWARD

class AwardBase
{
public:
	AwardBase() {};
};

class Award_Coin :public AwardBase
{
public:
	Award_Coin()
	{
		cout << "新建金币" << endl;
	}
};

class Award_Bone :public AwardBase
{
public:
	Award_Bone()
	{
		cout << "新建骨头" << endl;
	}
};

#endif
