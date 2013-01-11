//this program rolls a pair of dice 20 times

#include<iostream>
#include<cstdlib>
#include<time.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int DieOne;
	int DieTwo;
	
	srand(time(0));

	for (int i = 0; i < 20; i++)
	{
		DieOne = (rand()% 6) + 1; //use the modulus (%) operator to
		DieTwo = (rand()% 6) + 1; // set limits on your random number

		cout << "Die One is " << DieOne << ", ";
		cout << "Die Two is " << DieTwo << endl;
	}
   
   cin.get();
   return 0;
}