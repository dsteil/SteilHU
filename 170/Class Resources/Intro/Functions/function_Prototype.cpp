#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int power( int x, int y ); 
   //function prototype. A "promise" to define one later. (It's under main())

void displayStuff( int x, int y )
{
	cout << "Test" << x << endl;
}

int seven()
{
	//logic

	return 7;
}

void displayAbsoluteValue( int x )
{
	if( x < 0 )
	{
		cout << -1 * x << endl;
	}
	else
	{
		cout << x << endl;
	}
}

int main()
{
	displayStuff(8,3);
	cout << seven() << endl;
	displayAbsoluteValue( -99 );
	displayAbsoluteValue( -9 );
	displayAbsoluteValue( 8 );

	cout << power(power(3,power(9,2)),5);

   cin.get();
   return 0;
}

int power( int x, int y ) 
{
	int result = 1;

	if( y > 0 )
	{
		while( y > 0 )
		{
			result = result * x;
			y--;
		}
	}

	return result;
}
