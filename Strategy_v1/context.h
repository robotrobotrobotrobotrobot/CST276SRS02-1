#ifndef CONTEXT_H
#define CONTEXT_H
#include "strategy.h"
class Context
{
public:
	void setStrategy(Strategy * strategy);
	void opertion();
private:
	Strategy * strategy;
};
#endif // !CONTEXT_H