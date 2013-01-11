//this program demonstrates use of the
// reference and dereference operators

#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x = 9;
	cout << x << endl;   // outputs '9'
	cout << &x << endl;  // outputs the address of x

	int* p = &x;   // p is a pointer to an integer, can hold the address of an int
	cout << p << endl;   // outputs p, which is the address of x
	cout << *p << endl;  // outputs "what is stored at address p" (the integert 9)
   
   
   cin.get();
   return 0;
}

