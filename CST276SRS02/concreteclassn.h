// GOF Template Pattern
#ifndef CONCRETECLASSN_H
#define CONCRETECLASSN_H
#include"abstractclass.h"
class ConcreteClassN :public AbstractClass
{
	void PrimitiveOperation1()override;
	void PrimitiveOperation2()override;
};
#endif // !CONCRETECLASSN_H