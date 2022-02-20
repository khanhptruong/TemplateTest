#pragma once
#ifndef NEW_YEARS_CARD_TEMPLATE
#define NEW_YEARS_CARD_TEMPLATE

#include "GreetingCardTemplate.h"
class NewYearsCardTemplate : public GreetingCardTemplate
{
	std::string intro(const std::string& to) override;
	std::string occasion() override;
};

#endif