//this program explores the "switch" control structure

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i;
   
   cout << "Enter a grade: ";
	cin >> i;

   //a "switch" statement is simply a tidy way of using
   // lots of consecutive "if" (or "if-else-if") statements.
   
   //Pay attention to its unique syntax.
   /*
      switch([VARIABLE])
      {
         case [POSSIBLE VALUE A]: [DO STUFF]; break; //break means SKIP TO THE END.
         case [POSSIBLE VALUE B]: [DO OTHER STUFF]; break;
         case [POSSIBLE VALUE C]: [DO OTHER STUFF]; break;
         default: [DO STUFF ONLY IF NO CASES ARE MET]; 
      }
   */
  
  
   switch(i/10)
	{
		case 10: //"falls through" to case 9 (see example at line 42)
		case 9:	cout << "A\n"; break; 
		case 8:	cout << "B\n"; break; //if(i/10 = 8) cout << "B\n";
		case 7:	cout << "C\n"; break; //else if(i/10 = 7)....
		case 6:	cout << "D\n"; break;
		default: cout << "F\n";
	}

/*  
   //without "break":
   
   switch(i/10)
	{
		case 10: 
		case 9:	cout << "A\n"; //If for instance i/10 = 8, then every following line of 
		case 8:	cout << "B\n"; // code is executed until "break" or "default" is met.
		case 7:	cout << "C\n"; // This is known as "falling through."
		case 6:	cout << "D\n"; // Note that the code in cases 9 and 10 is not executed.
		default: cout << "F\n";
	}
   
   //note that you do not need to use brackets if you 
   // have more than one line of code in a case.

   switch(i/10)
	{
		case 10: 
		case 9:	
         cout << "A\n"; 
         //do stuff
         break;
		case 8:	
         cout << "B\n"; 
         //do stuff
         break;
		case 7:	
         cout << "C\n"; 
         break;
		case 6:	
         cout << "D\n"; 
         break;
		default: 
         cout << "F\n";
	} 
//this format is preferred when your cases contain many lines of code.
   
*/
   
   cin.get();
	return 0;
}
