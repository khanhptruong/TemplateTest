#include <iostream>
#include "GreetingCardHeaders.h"
using namespace std;

int main () 
{
	GreetingCardTemplate gct;
	BirthdayCardTemplate bct;
	NewYearsCardTemplate nyct;

	cout << "Greeting card:\n" << gct.generate("Bob", "Jane") << "\n\n";
	cout << "Birthday card:\n" << bct.generate("Bob", "Jane") << "\n\n";
	cout << "New Years card\n" << nyct.generate("Bob", "Jane") << "\n\n";

	return EXIT_SUCCESS;
}