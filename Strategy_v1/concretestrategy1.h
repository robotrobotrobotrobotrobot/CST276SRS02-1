#ifndef CONCRETESTRATEGY1_H
#define CONCRETESTRATEGY1_H
#include "strategy.h"
class ConcreteStrategy1 :public Strategy
{
public:
	ConcreteStrategy1() = default;
	~ConcreteStrategy1() = default;

private:
	void doAlgorithm()override;

};
#endif // !CONCRETESTRATEGY1_H
