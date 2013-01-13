//placed in "rough" because struct_Arkansan.cpp teaches these things

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

struct Height_Type
{
	int Feet;
	int Inches;

	Height_Type();
	void get();
	void display();
};

Height_Type::Height_Type()
{
	Feet = 0;
	Inches = 0;
}

void Height_Type::get()
{
	cout << "Height (Feet Inches): ";
	cin >> Feet;
	cin >> Inches;
}

void Height_Type::display()
{
	cout << "Height: ";
	cout << Feet << " ft. ";
	cout << Inches << " in. " << endl;
}


struct SuperHero_Type
{
	string Name;
	int Age;
	string SuperPower;
	string Alias;
	float Weight;
	Height_Type Height; 

	void get();
	void display();

};

void SuperHero_Type::get()
{
	cout << "Name: ";
	getline(cin, Name);

	cout << "Age: ";
	cin >> Age;
	cin.get(); //throws away end of line char

	cout << "Alias: ";
	getline(cin,Alias);

	cout << "Super Power: ";
	getline(cin,SuperPower);

	cout << "Weight: ";
	cin >> Weight;

	Height.get();
}




void SuperHero_Type::display()
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Alias: " << Alias << endl;
	cout << "Super Power: " << SuperPower << endl;
	cout << "Weight: " << Weight << endl;
	Height.display();
}

int main()
{
	SuperHero_Type SuperHero;

	SuperHero.get();
	SuperHero.display();
   
   cin.get();
   return 0;
}