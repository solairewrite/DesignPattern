#include "Demo.h"

int main(int argc, char* argv[])
{
	EDesignPattern DesignPatternType = EDesignPattern::ETemplateMethod;

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

	else if (DesignPatternType == EDesignPattern::EAdapter)
		Demo::Demo_Adapter();

	else if (DesignPatternType == EDesignPattern::EBridge)
		Demo::Demo_Bridge();

	else if (DesignPatternType == EDesignPattern::EComposite)
		Demo::Demo_Composite();

	else if (DesignPatternType == EDesignPattern::EDecorator)
		Demo::Demo_Decorator();

	else if (DesignPatternType == EDesignPattern::EObserver)
		Demo::Demo_Observer();

	else if (DesignPatternType == EDesignPattern::EStrategy)
		Demo::Demo_Stratedy();

	else if (DesignPatternType == EDesignPattern::ETemplateMethod)
		Demo::Demo_Template_Method();

}
