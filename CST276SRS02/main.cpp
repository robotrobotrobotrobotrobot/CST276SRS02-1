#include "concreteclass.h"
#include "concreteclass1.h"
#include "concreteclassn.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main()
{
	ConcreteClass obj;
	obj.TemplateMethod();
	ConcreteClass1 obj1;
	obj1.TemplateMethod();
	ConcreteClassN objn;
	objn.TemplateMethod();
	return 0;
}