#include "Demo.h"

int main(int argc, char* argv[])
{
	EDesignPattern DesignPatternType = EDesignPattern::ESingleton;

	if (DesignPatternType == EDesignPattern::EAbstractFactory)
	{
		Demo::Demo_AbstractFactory();
	}
	else if (DesignPatternType == EDesignPattern::ESingleton)
	{
		Demo::Demo_Singleton();
	}

}
