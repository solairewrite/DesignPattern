#include "Observer.h"
#include <iostream>

using namespace std;

void Subject::Add(Observer* inObserver)
{
	ObserverArr.push_back(inObserver);
}

void Subject::Remove(Observer* inObserver)
{
	// vector删除元素
	vector<Observer*>::iterator it;
	it = find(ObserverArr.begin(), ObserverArr.end(), inObserver);
	if (it != ObserverArr.end())
	{
		ObserverArr.erase(it);
	}
}

void Subject::Notify()
{
	// 遍历vector
	vector<Observer*>::iterator it;
	for (it = ObserverArr.begin(); it != ObserverArr.end(); ++it)
	{
		(*it)->Update(this);
	}
}

Guard::Guard(Alarm* inAlarm)
{
	alarm = inAlarm;
	alarm->Add(this);
}

Guard::~Guard()
{
	alarm->Remove(this);
}

void Guard::Update(Subject* inSubject)
{
	// 类型转换,判断子类
	if (alarm == dynamic_cast<Alarm*>(inSubject))
	{
		if (alarm->GetAlarmState() == EAlarmState::EAlarm)
		{
			cout << "守卫处于战斗状态" << endl;
		}
	}
}

Patroller::Patroller(Alarm* inAlarm)
{
	alarm = inAlarm;
	alarm->Add(this);
}

Patroller::~Patroller()
{
	alarm->Remove(this);
}

void Patroller::Update(Subject* inSubject)
{
	if (alarm == dynamic_cast<Alarm*>(inSubject))
	{
		if (alarm->GetAlarmState() == EAlarmState::EAlarm)
		{
			cout << "巡逻兵前往基地" << endl;
		}
	}
}
