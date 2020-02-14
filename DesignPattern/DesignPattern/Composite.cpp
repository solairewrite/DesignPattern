#include "Composite.h"
#include <iostream>

using namespace std;

void Troop::Add(Troop* inArmy)
{
	TroopArr.push_back(inArmy);
}

void Troop::Remove(Troop* inArmy)
{
	// vector删除元素
	std::vector<Troop*>::iterator it;
	it = find(TroopArr.begin(), TroopArr.end(), inArmy);
	if (it != TroopArr.end())
	{
		TroopArr.erase(it);
	}
}

void Troop::PrintNames()
{
	std::vector<Troop*>::iterator it;
	for (it = TroopArr.begin(); it != TroopArr.end(); ++it)
	{
		(*it)->PrintNames();
		cout << " ";
	}
}

int Troop::GetPrice()
{
	int AllPrice = 0;
	// 迭代器,遍历vector
	std::vector<Troop*>::iterator it;
	for (it = TroopArr.begin(); it != TroopArr.end(); ++it)
	{
		int tPrice = (*it)->GetPrice();
		AllPrice += tPrice;
	}
	return AllPrice;
}

void SingleSolider::PrintNames()
{
	cout << name;
}
