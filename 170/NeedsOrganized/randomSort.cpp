// this program implements the random sort algorithm

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

const int SIZE = 10;

void displayList(int list[])
{
	for(int i = 0; i < SIZE; i++)
	{
		cout << list[i] << endl;
	}
}

bool isSorted(int list[])
{
	bool sorted = true;

	for(int i = 0; i < (SIZE - 1); i++)
	{
		if(list[i] > list[i+1])
		{
			sorted = false;
			break;
		}
	}

	return sorted;
}

void mixUpList(int list[])
{
	int newList[SIZE];
	for(int i = 0; i < SIZE; i++)
	{
		int randomIndex = rand()%SIZE;

		while(list[randomIndex] == -1)
		{
			randomIndex = rand()%SIZE;
		}
		newList[i] = list[randomIndex];
		list[randomIndex] = -1;
	}

	for(int i = 0; i < SIZE; i++)
	{
		list[i] = newList[i];
	}
}

int main()
{
	int list[SIZE] = {22,33,12,3245,67,234,23,2,455,234};


	while(!isSorted(list))
	{
		mixUpList(list);
	}
	displayList(list);
   
   cin.get();
   return 0;
}



