//this program uses the cin.getline() function

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void GetLineExample()
{
	char s[20];
	//cin.get(s,20);
	//cin.ignore(); //with cin.get() you have to manually remove
                //   the carriage return character at left in the buffer

	cout << "Enter a string: ";
   cin.getline(s,20);
   //Use getline to automaticaly remove the end of line
	//character from the input buffer.
   cin.getline(s,20);
	//getline, like get, will get white space and has bounds checking	
	
	cout << s << endl;
}


int main()
{
	GetLineExample();
   
   cin.get();
   return 0;
}