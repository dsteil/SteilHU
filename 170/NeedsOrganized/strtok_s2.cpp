//strtok_s() parses for a token just as strtok() does, except
// there is no bounds checking.

#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char s1[100];
	char s2[100] = "";
	cin.getline(s1,100);
	
	char* nextToken;
	char* token;

	token = strtok_s(s1, " ", &nextToken);
	do
	{
		//cout << token << endl;
		strcat_s(s2, 100,  token);
		strcat_s(s2, 100, "yay ");
		token = strtok_s(NULL, " ", &nextToken);
	}
	while (token != NULL);

	cout << s2 << endl;
   
   cin.get();
   return 0;
}

