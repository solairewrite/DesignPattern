#include "Decorator.h"
#include <iostream>

using namespace std;

void Cannon::Fire()
{
	MachineDecorator::Fire();
	cout << "开炮" << endl;
}

void FlameThrower::Fire()
{
	MachineDecorator::Fire();
	cout << "喷火" << endl;
}
