//this program uses the strtok() function to parse
// a string for the token ' '. Then the program uses
// the ' 's to display the words in reverse order

#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char original[100];
	char result[100] = "";
	char temp[100] = "";

	cout << "Enter a several words: ";
   cin.getline(original, 100);

	char* token = strtok(original," ");
	//strtok() returns the pointer to the LAST token found in the string,
   // or NULL if there are no tokens left.
   while(token != NULL)
	{ 
		strcpy( temp, " ");
		strcat(temp, token);
		strcat(temp, result);
		strcpy(result, temp);

		token = strtok(NULL," ");
	}
	strcpy(result, result + 1);

	cout << result << endl;
   
   cin.get();
   return 0;
}


