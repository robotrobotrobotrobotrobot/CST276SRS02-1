#ifndef IDATEVALIDATOR_H
#define IDATEVALIDATOR_H
#include <string>

class IDateValidator
{
public:
	virtual bool is_good(std::string const date) const = 0;
};
#endif // !IDATEVALIDATOR_H