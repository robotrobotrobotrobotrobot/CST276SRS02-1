#ifndef CONCRETESTRATEGY_H
#define CONCRETESTRATEGY_H
#include "strategy.h"
class ConcreteStrategy :public Strategy
{
public:
	ConcreteStrategy() = default;
	~ConcreteStrategy() = default;

private:
	void doAlgorithm()override;

};
#endif // !CONCRETESTRATEGY_H
