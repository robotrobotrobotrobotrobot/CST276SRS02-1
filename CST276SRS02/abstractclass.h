// GOF Template Pattern
#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

class AbstractClass
{
public:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	void TemplateMethod()
	{
		// ...
		PrimitiveOperation1();
		// ...
		PrimitiveOperation2();
		// ...
	}
};
#endif // !ABSTRACTCLASS_H