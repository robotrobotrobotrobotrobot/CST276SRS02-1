#ifndef VALIDATORYMD_H
#define VALIDATORYMD_H
#include "strategy.h"
class ValidatorYMD :public Strategy
{
public:
	ValidatorYMD();
	~ValidatorYMD();

private:
	void doAlgorithm(string str, bool& isG)override;
};
#endif // !VALIDATORYMD_H

