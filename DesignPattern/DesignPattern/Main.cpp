#include "Demo.h"

int main(int argc, char* argv[])
{
	EDesignPattern DesignPatternType = EDesignPattern::EPrototype;

	if (DesignPatternType == EDesignPattern::EAbstractFactory)
		Demo::Demo_AbstractFactory();

	else if (DesignPatternType == EDesignPattern::EBuilder)
		Demo::Demo_Builder();

	else if (DesignPatternType == EDesignPattern::EFactoryMethod)
		Demo::Demo_FactoryMethod();

	else if (DesignPatternType == EDesignPattern::EPrototype)
		Demo::Demo_Prototype();

	else if (DesignPatternType == EDesignPattern::ESingleton)
		Demo::Demo_Singleton();

}
