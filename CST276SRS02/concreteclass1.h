// GOF Template Pattern
#ifndef CONCRETECLASS1_H
#define CONCRETECLASS1_H
#include"abstractclass.h"
class ConcreteClass1 :public AbstractClass
{
	void PrimitiveOperation1()override;
	void PrimitiveOperation2()override;
};
#endif // !CONCRETECLASS1_H