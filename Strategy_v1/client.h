#ifndef CLIENT_H
#define CLIENT_H
#include "context.h"
#include "concretestrategy.h"
class Client
{
public:
	Client();
	~Client();

	void operation();

private:
	ConcreteStrategy * concreteStrategy;
	Context * context;
};

inline Client::Client():context(new Context),
concreteStrategy(new ConcreteStrategy)
{
}

inline Client::~Client()
{
	delete context;
	context = nullptr;

	delete concreteStrategy;
	concreteStrategy = nullptr;
}

inline void Client::operation()
{
	//...
	context->setStrategy(concreteStrategy);
	//...
	context->opertion();
	//...
}
#endif // !CLIENT_H
