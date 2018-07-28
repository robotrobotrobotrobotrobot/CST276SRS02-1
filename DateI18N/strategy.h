//GoF strategy pattern
#ifndef STRATEGY_H
#define STRATEGY_H
#include <string>
#include <sstream>
using std::string;
class Strategy
{
public:
	virtual void Algorithm(string str, bool& isG)
	{
		doAlgorithm(str, isG);
	}
private:
	virtual void doAlgorithm(string str, bool& isG) = 0;
};
#endif // !STRATEGY_H