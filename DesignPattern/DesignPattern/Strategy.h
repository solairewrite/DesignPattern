// 策略模式
// 实例:去目的地,方案A步行,方案B载具

#ifndef STRATEGY
#define STRATEGY

class TravelMethodBase;

class Travel
{
public:
	Travel() = delete;
	Travel(TravelMethodBase* inMethod) :method(inMethod) {}

	void GotoDestination();
private:
	TravelMethodBase* method;
};

class TravelMethodBase
{
public:
	TravelMethodBase() {}

	virtual void GotoTarget() = 0;
};

class TravelMethod_Walk :public TravelMethodBase
{
public:
	TravelMethod_Walk() {}

	virtual void GotoTarget();
};

class TravelMethod_Car :public TravelMethodBase
{
public:
	TravelMethod_Car() {}

	virtual void GotoTarget();
};

#endif