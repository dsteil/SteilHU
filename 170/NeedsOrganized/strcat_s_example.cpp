//strcat_s is a Microsoft-specific function that does not automatically
// perform bounds checking. Instead, it returns a an error code that allows
// the programmer to decide what to do in the case of a failure. The example
// provided only demonstrates that strcat_s is used much like strcat.
//
//Note that as of 01/2013, strcat_s is not a part of the C++ standard, and 
// will only work on Microsoft machines/compilers.

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char source[100];
	char destination[100];
   
   cout << "Enter a source string: ";
	cin.getline(source,100);
   
   cout << "Enter a destination string: ";
	cin.getline(destination,100);
	
	strcat_s(destination, source);
      //appends the source to the destination, no bounds checking
	cout << destination << endl;
   
   cin.get();
   return 0;
}

//In-depth explanation:

/* 
The strcat_s() function appends the characters of the source string, up to and including the 
null character, to the end of the destination string. The initial character from the source 
string overwrites the null character at the end of the destination string.

The strcat_s() function returns zero on success. However, the destination string is set to 
the null string and a nonzero value is returned if either the source or destination pointers 
are NULL or if the maximum length of the destination buffer is equal to zero or greater than 
RSIZE_MAX. The strcat_s() function will also fail if the destination string is already full 
or if there is not enough room to fully append the source string.

The strcpy_s() and strcat_s() functions can still result in a buffer overflow if the maximum 
length of the destination buffer is incorrectly specified. 
*/