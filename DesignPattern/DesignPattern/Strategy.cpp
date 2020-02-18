#include "Strategy.h"
#include <iostream>

using namespace std;

void Travel::GotoDestination()
{
	if (method)
	{
		method->GotoTarget();
	}
}

void TravelMethod_Walk::GotoTarget()
{
	cout << "步行去目标点" << endl;
}

void TravelMethod_Car::GotoTarget()
{
	cout << "坐车去目标点" << endl;
}
