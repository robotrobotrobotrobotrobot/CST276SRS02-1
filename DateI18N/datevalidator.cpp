#include "datevalidator.h"

DateValidatorI18N::DateValidatorI18N(string str):form_(new ValidatorDMY),format_(new Context),date_(str),isGood_(true)
{
}

DateValidatorI18N::~DateValidatorI18N()
{
	delete form_;
	form_ = nullptr;

	delete format_;
	format_ = nullptr;
}

void DateValidatorI18N::operation()
{
	//...
	format_->setStrategy(form_);
	//...
	format_->opertion(date_, isGood_);
	//...
}

bool DateValidatorI18N::is_good(std::string const date) const
{
	return isGood_;
}

bool DateValidatorI18N::IsGood() const
{
	return isGood_;
}
