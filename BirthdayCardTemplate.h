#pragma once
#ifndef BIRTHDAY_CARD_TEMPLATE
#define BIRHTDAY_CARD_TEMPLATE

#include "GreetingCardTemplate.h"

class BirthdayCardTemplate : public GreetingCardTemplate
{
protected:
	std::string occasion() override;
};

#endif