//this is an example of a header file.
//header files make your code tidier and more accessible.
//they should contain your definitions and your implementations.

//ALL this code is essentially inserted by the compiler
// wherever there is #include "superhero.h"

//these are compiler directives. They are not executed at runtime
#ifndef SUPER_HERO_H //if SUPER_HERO_H has not been defined then continue...
#define SUPER_HERO_H //define SUPER_HERO_H. (SUPER_HERO_H is now defined)

//continuing...

const int MAX_NAME_LENGTH = 30;

struct CSuperHero
{
	char Name[60];
	CHeight Height;
	int Age;

	void Show()
	{
		cout << Name << " is " << endl;
		cout << Height.Feet << "' and " 
			 << Height.Inches << "\" tall" << endl;
		cout << "and is " << Age << " years old." << endl;
	}

	void Get()
	{
		cout << "Name: ";
		cin.getline(Name, MAX_NAME_LENGTH);
		cin.ignore(cin.rdbuf()->in_avail(),'\n');

		cout << "Height: "<< endl;
		cout <<	"       Feet: ";
		cin >> Height.Feet;
		cin.ignore(cin.rdbuf()->in_avail(),'\n');

		cout << "       Inches: ";
		cin >> Height.Inches;
		cin.ignore(cin.rdbuf()->in_avail(),'\n');

		cout << "Age: ";
		cin >> Age;
		cin.ignore(cin.rdbuf()->in_avail(),'\n');

		cout << endl;
	}

};

#endif //you don't want anything after this in your header file.
//We jump from line 9 to 54 if SUPER_HERO_H had already been defined
