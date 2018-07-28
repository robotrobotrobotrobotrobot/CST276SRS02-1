#include "context.h"

void Context::setStrategy(Strategy * strat)
{
	strategy = strat;
}

void Context::opertion()
{
	strategy->Algorithm();
}
