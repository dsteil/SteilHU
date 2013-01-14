//this program introduces user-defined types

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct SuperHero  //definition
{
	string name;   
	string power;
	string transportation;  //these are called "member variables", or "members"
	long age;               //these represent the "state" of the superhero
	double weight;
   string mood;
};

void get(SuperHero& superHero);
void show(SuperHero& superHero);
void makeSad(SuperHero& superHero);

int main()
{
	SuperHero myHero; //declaration

	get(myHero);
   makeSad(myHero); //state can be changed
	show(myHero);
   
   cin.get();
   return 0;
}

void get(SuperHero& superHero)
{
	cout << "name? ";
	getline(cin,superHero.name);  //use the '.' operator to access members of a struct
	cout << "Power? ";
	getline(cin,superHero.power);
	cout << "Mode of transportation? ";
	getline(cin,superHero.transportation);
	cout << "age? ";
	cin >> superHero.age;
	cout << "weight? ";
	cin >> superHero.weight;
   cout << "mood? ";
	cin >> superHero.mood;
}

void makeSad(SuperHero& superHero)
{
   cout << endl << "Making hero sad..." << endl;
   superHero.mood = "Sad";
}

void show(SuperHero& superHero)
{
	cout << endl;
   cout << "name: " << superHero.name << endl;
   cout << "Power: "<< superHero.power << endl;
	cout << "Mode of transportation: " << superHero.transportation << endl;
	cout << "age: " << superHero.age << endl;
	cout << "weight: " << superHero.weight << endl;
    cout << "mood: " << superHero.mood << endl;
}



