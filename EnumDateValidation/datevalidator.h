//GoF Strategy
#ifndef DATEVALIDATORI18N_H
#define DATEVALIDATORI18N_H
#include "idatevalidator.h"
class DateValidatorI18N : public IDateValidator// DateValidatorI18N is the client of the strategy pattern
{
public:
	enum class Format { YMD, DMY, MDY };
	DateValidatorI18N() = default;
	~DateValidatorI18N();
	void operation();
	bool is_good(std::string const date)const override;
private:
};
#endif // !DATEVALIDATORI18N_H
