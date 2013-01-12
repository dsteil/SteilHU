//strcpy_s is a Microsoft-specific function that does not automatically
// perform bounds checking. Instead, it returns a an error code that allows
// the programmer to decide what to do in the case of a failure. The example
// provided only demonstrates that strcpy_s is used much like strcpy.
//
//Note that as of 01/2013, strcpy_s is not a part of the C++ standard, and 
// will only work on Microsoft-specific machines/compilers.

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char source[100];
	char destination[100];
	cout << "Enter a string: ";
	cin.getline(source,100);
	
	strcpy_s(destination, source);
      //copies from the second argument to the first
   
	cout << destination << endl;
   
   cin.get();
   return 0;
}

//In depth explanation:

/* 
The strcpy_s() function is similar to strcpy() when there are no constraint violations. 
The strcpy_s() function copies characters from a source string to a destination character 
array up to and including the terminating null character. The function returns zero upon 
success.

The strcpy_s() function only succeeds when the source string can be fully copied to the 
destination without overflowing the destination buffer. If either the source or 
destination pointers are NULL or if the maximum length of the destination buffer is equal 
to zero, greater than RSIZE_MAX, or less than or equal to the length of the source string, 
the destination string is set to the null string and the function returns a nonzero value. 
*/