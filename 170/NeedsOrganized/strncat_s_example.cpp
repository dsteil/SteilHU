//strncat_s is a Microsoft-specific function that does not automatically
// perform bounds checking. Instead, it returns a an error code that allows
// the programmer to decide what to do in the case of a failure. The example
// provided only demonstrates that strncat_s is used much like strncat.
//
//Note that as of 01/2013, strncat_s is not a part of the C++ standard, and 
// will only work on Microsoft machines/compilers.

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char source[100];
	char destination[100];
	cin.getline(destination,100);
	cin.getline(source,100);
	//appends the first n characters of the source to the destination 
	//no bounds checking
	strncat_s(destination, source,3);
	cout << destination << endl;
   
   cin.get();
   return 0;
}
