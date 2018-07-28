#include "context.h"

void Context::setStrategy(Strategy * strat)
{
	strategy = strat;
}

void Context::opertion(string str,bool isG)
{
	strategy->Algorithm(str,isG);
}
