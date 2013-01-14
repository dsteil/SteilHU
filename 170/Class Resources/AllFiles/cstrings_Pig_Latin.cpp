//this program receives a string from  the user and
// translates it into pig latin.

#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;
 
void translateToPigLatin(char phrase[]);
const int MAX_PHRASE_LENGTH = 1000;
const int MAX_WORD_LENGTH = 100;

int main()
{
   char phrase[MAX_PHRASE_LENGTH];
     
   cout << "Please enter a phrase to be translated to Pig Latin:" << endl;
   cin.getline(phrase, MAX_PHRASE_LENGTH);
     
    
   translateToPigLatin(phrase);
	  
   cout << phrase << endl;
	cin.get();
	return 0;
}

bool isVowel(char c)
{
	bool result = false;
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
		c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		result = true;
	}
	return result;
}

int countLeadingConsonants(char Word[])
{
	int result = 0;

	while(!isVowel(Word[result]) && Word[result] != '\0')
	{
		result ++;
	}

	return result;
}

void translateWordToPigLatin(char Word[])
{
	char result[MAX_WORD_LENGTH];
	if(isVowel(Word[0]))
	{
		strcat(Word,"yay");
	}
	else
	{
		int consonantCount = countLeadingConsonants(Word);
		strcpy(result, Word + consonantCount);
		strcat(result,Word);
		result[strlen(Word)] = '\0';		
		strcat(result,"ay");
		strcpy(Word,result);
	}
}

void translateToPigLatin(char phrase[])
{
	char answer[MAX_PHRASE_LENGTH] = "";
	char word[MAX_WORD_LENGTH];
	int wordIndex = 0;
	for(int i = 0; i <= strlen(phrase);i++)
	{
		if(phrase[i] != ' ' && phrase[i] != '\0')
		{
			word[wordIndex] = phrase[i];
			wordIndex++;
		}
		else
		{
			//reached the end of a word in the phrase
			word[wordIndex] = '\0';
			wordIndex = 0;
			translateWordToPigLatin(word);
			strcat(answer,word);
			strcat(answer," ");
		}

	}


	strcpy(phrase,answer);
}