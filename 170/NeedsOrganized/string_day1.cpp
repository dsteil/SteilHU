//this code serves an an introduction to c-style strings

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//string - a grouping of characters to form a word or phrase in a program
// a c-style string - array of charcters whose end is marked by the "null terminator" '\0'
//null terminator ('\0') - has an ascii value of 0, marks the end of strings

int main()
{
	char s[100];

	s[0] = 'E';
	s[1] = 'l';
	s[2] = 'i';
	s[3] = '\0';

	cout << s << endl;

	char s2[100] = {'E','m','m','a'};
	cout << s2 << endl;

	// you can only initalize a string using the "=" at the declaration
	char s3[100] = "Eden";
	cout << s3 << endl;

	// s3 = "Bob"; here will not compile. See above comment.

	char phrase[100];
   cout << "Enter a string: ";
	cin.getline( phrase, 100);
	cout << "Your string: " << phrase;
   
   cin.get();
   return 0;
}