//GoF Strategy
#ifndef DATEVALIDATORI18N_H
#define DATEVALIDATORI18N_H
#include "idatevalidator.h"
#include "context.h"
#include "validatordmy.h" 
#include "validatormdy.h"
#include "validatorymd.h"
class DateValidatorI18N: public IDateValidator// DateValidatorI18N is the client of the strategy pattern
{
public:
	DateValidatorI18N(string str);
	~DateValidatorI18N();
	void operation();
	bool is_good(std::string const date)const override;
	bool IsGood()const;
private:
	ValidatorDMY * form_;// to change the validation formate change this class
	Context * format_;
	string date_;
	bool isGood_ = true;
};
#endif // !DATEVALIDATORI18N_H
