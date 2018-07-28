#ifndef VALIDATORDMY_H
#define VALIDATORDMY_H
#include "strategy.h"
class ValidatorDMY :public Strategy
{
public:
	ValidatorDMY();
	~ValidatorDMY();

private:
	void doAlgorithm(string str, bool& isG)override;
};
#endif // !VALIDATORDMY_H

