// 观察者模式
// 实例:警报响起,守卫开启战斗模式,巡逻队前往基地

#include <vector>

using namespace std;

#ifndef OBSERVER
#define OBSERVER

class Subject;

// 观察者
class Observer
{
public:
	virtual ~Observer() {}
	virtual void Update(Subject* inSubject) = 0;

protected:
	Observer() {}
};

// 目标,向观察者发出通知
class Subject
{
public:
	virtual ~Subject() {}

	virtual void Add(Observer* inObserver);
	virtual void Remove(Observer* inObserver);
	virtual void Notify();

protected:
	Subject() {}
private:
	vector<Observer*> ObserverArr;
};

enum class EAlarmState
{
	ENormal,
	EAlarm,
};

class Alarm :public Subject
{
public:
	Alarm() {}

	EAlarmState GetAlarmState() { return AlarmState; }
	void SetAlarmState(EAlarmState inState) { AlarmState = inState; }

protected:
	EAlarmState AlarmState = EAlarmState::ENormal;
};

enum class EGuardState
{
	ENormal,
	EBattle,
};

class Guard :public Observer
{
public:
	Guard(Alarm* inAlarm);
	virtual ~Guard();

	virtual void Update(Subject* inSubject);

private:
	Alarm* alarm;
};

// 巡逻者
class Patroller :public Observer
{
public:
	Patroller(Alarm* inAlarm);
	virtual ~Patroller();

	virtual void Update(Subject* inSubject);

private:
	Alarm* alarm;
};

#endif