#include "Demo.h"

int main(int argc, char* argv[])
{
	EDesignPattern DesignPatternType = EDesignPattern::EAbstractFactory;

	if (DesignPatternType == EDesignPattern::EAbstractFactory)
	{
		Demo::Demo_AbstractFactory();
	}
}
