#include <iostream>
using namespace std;

//complete the function stringCompare
//it should return 0 if the strings are the same
//1 if the first argument is greater than the second
//-1 if the first  argument is less than the second
//examples: 
//stringCompare("abc","xyz") should return -1
//stringCompare("xyz","abc") should return 1
//stringCompare("abc","abc") should return 0

int stringCompare(char s1[], char s2[])
{
}

void main ()
{
	char s1[100] = "";
	char s2[100] = "";
	cin >> s1;
	cin >> s2;

	if(stringCompare(s1,s2) == 0)
	{
		cout << "Same" << endl;
	}
	else if(stringCompare(s1,s2) > 0)
	{
		cout << s1 << " is greater than " << s2 << endl;
	}
	else
	{
		cout << s2 << " is greater than " << s1 << endl;
	}

    system("Pause");
}