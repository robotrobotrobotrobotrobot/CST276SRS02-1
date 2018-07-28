#include <iostream>
#include <assert.h>
#include "datevalidator.h"

int main() {
	
	for (auto&& txt : { "05/11/1996", "30/02/1983", "29/02/2000", "29/02/2001"})
	{
		DateValidatorI18N date(txt);
		date.operation();
		assert(date.IsGood());
	}
	return 0;
}