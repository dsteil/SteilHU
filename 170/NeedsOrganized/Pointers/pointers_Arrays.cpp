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
   
  	int A[10]; // indexes 0-9 - 10 ints

	for(int i = 0; i < 10; i++)
	{
		A[i] = i * 5;
		//*(A + i) = i * 5;
	}

	for(int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}

	p = A;

	cout << endl;

	while( p < (A + 10))
	{
		cout << *p << " ";
		p++;
	}

   cin.get();
   return 0;
}

