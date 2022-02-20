#include "GreetingCardTemplate.h"

std::string GreetingCardTemplate::intro (const std::string& to)
{
	return "Dear " + to + ",\n";
}

std::string GreetingCardTemplate::occasion ()
{
	return "Just writing to say hi! Hope all is well with you.";
}

std::string GreetingCardTemplate::closing(const std::string &from)
{
	return "Sincerely,\n" + from + "\n";
}

std::string GreetingCardTemplate::generate(const std::string& to, const std::string& from)
{
	return intro(to) + occasion() + closing(from);
}