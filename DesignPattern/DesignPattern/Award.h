// 创建出的奖励
#ifndef AWARD
#define AWARD

class AwardBase
{
public:
	AwardBase() {};
	AwardBase(const AwardBase& inAward)
	{
		bCanSell = inAward.bCanSell;
	}

	virtual AwardBase* Clone()
	{
		return new AwardBase(*this);
	}

protected:
	bool bCanSell;
};

class Award_Coin :public AwardBase
{
public:
	Award_Coin()
	{
		cout << "创建奖励:金币" << endl;
		bCanSell = false;
	}
};

class Award_Bone :public AwardBase
{
public:
	Award_Bone()
	{
		cout << "创建奖励:骨头" << endl;
		bCanSell = true;
	}
};

#endif
