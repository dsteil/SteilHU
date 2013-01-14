//this program replaces contents of a string with
// something else

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//4.	Complete the following function.  It should replace all of the 
//		occurrences of the string s2 in the string s1 with string the s3. (10 points)
void replaceContents(string& s1, const string& s2, const string& s3)
{
	int index = (int)s1.find(s2); 

	while( index != string::npos)
	{
		s1.replace(index, s2.length(),s3);
		index = (int)s1.find(s2); 
	}
}


int main()
{
	string s = "This cow is cow a cow test cow";
	replaceContents(s,"cow","Bunny");

	cout << s;
   
   cin.get();
   return 0;
}