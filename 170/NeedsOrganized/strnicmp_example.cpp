#include<iostream>
using namespace std;

void main()
{
	char s1[100];
	char s2[100];
	cin.getline(s1,100);
	cin.getline(s2,100);
	
	cout << _strnicmp(s1,s2,4) << endl;
	//compares two strings for the first n characters case insensitively
	//returns 0 when they are the same
	//returns < 0 when s1 < s2
	//returns > 0 when s1 > s2
	if( _strnicmp(s1,s2,4) == 0 )
	{
		cout << "same strings" << endl;
	}
}

