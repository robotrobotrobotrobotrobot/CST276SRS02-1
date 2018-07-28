#ifndef VALIDATORMDY_H
#define VALIDATORMDY_H
#include "strategy.h"
class ValidatorMDY :public Strategy
{
public:
	ValidatorMDY();
	~ValidatorMDY();

private:
	void doAlgorithm(string str, bool& isG)override;
};
#endif // !VALIDATORMDY_H

