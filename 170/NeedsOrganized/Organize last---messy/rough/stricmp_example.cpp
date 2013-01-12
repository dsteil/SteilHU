//I saved this code because it might be better to use than 
// cstrings_BuiltInFunctions_stricmp.cpp

//this program uses a C++ built-in function to compare
// two strings, case insensitive

#if !defined(_WIN32) && !defined (_MSC_VER)
#define stricmp strcasecmp
#endif
//the above compiler directives allow this program
// to be compiled on a Linux machine. strcasecmp()
// is the Linux-friendly version of stricmp().

#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char s1[100];
	char s2[100];
   
   cout << "Enter a string: ";
	cin.getline(s1,100);
   cout << "Enter a 2nd string: ";
	cin.getline(s2,100);
	
	cout << stricmp(s1,s2) << endl;
	//compares two strings case insensitivly
	//returns 0 when they are the same
	//returns < 0 when s1 < s2
	//returns > 0 when s1 > s2
	
   if( stricmp(s1,s2) == 0 )
	{
		cout << "Same.";
	}
   else
   {
      cout << "Not same.";
   }
   
   cin.get();
   return 0;
}


