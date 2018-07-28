#include "validatorymd.h"

ValidatorYMD::ValidatorYMD()
{
}

ValidatorYMD::~ValidatorYMD()
{
}

void ValidatorYMD::doAlgorithm(string str, bool& isG)
{
	std::istringstream ss(str);
	std::string token;

	isG = true;
	std::getline(ss, token, '/');//token must be valid year
	int numcharyear_ = 0;
	for (char c : token) 
	{
		if (!isdigit(c))
		{
			isG = false;
		}
		++numcharyear_;
	}
	if (numcharyear_ != 4)
	{
		isG = false;
	}
	std::getline(ss, token, '/');//token must be valid month
	int numcharmonth_ = 0;
	for (char c : token)
	{
		if (!isdigit(c))
		{
			isG = false;
		}
		++numcharmonth_;
	}
	if (numcharmonth_ != 2)
	{
		isG = false;
	}
	std::getline(ss, token, '/');//token must be valid day
	int numcharday_ = 0;
	for (char c : token)
	{
		if (!isdigit(c))
		{
			isG = false;
		}
		++numcharyear_;
	}
	if (numcharday_ != 2)
	{
		isG = false;
	}
}
