#pragma once
#ifndef GREETING_CARD_TEMPLATE
#define	GREETING_CARD_TEMPLATE

#include <iostream>
#include <string>

class GreetingCardTemplate
{
protected:
	virtual std::string intro(const std::string& to);
	virtual std::string occasion();
	virtual std::string closing(const std::string& from);

public:
	std::string generate(const std::string& to, const std::string& from);
};

#endif
