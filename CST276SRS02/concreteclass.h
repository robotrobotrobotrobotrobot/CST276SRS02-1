// GOF Template Pattern
#ifndef CONCRETECLASS_H
#define CONCRETECLASS_H
#include"abstractclass.h"
class ConcreteClass :public AbstractClass
{
	void PrimitiveOperation1()override;
	void PrimitiveOperation2()override;
};
#endif // !CONCRETECLASS_H

