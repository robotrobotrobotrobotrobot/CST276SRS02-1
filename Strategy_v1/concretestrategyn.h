#ifndef CONCRETESTRATEGYN_H
#define CONCRETESTRATEGYN_H
#include "strategy.h"
class ConcreteStrategyN :public Strategy
{
public:
	ConcreteStrategyN() = default;
	~ConcreteStrategyN() = default;

private:
	void doAlgorithm()override;

};
#endif // !CONCRETESTRATEGYN_H

