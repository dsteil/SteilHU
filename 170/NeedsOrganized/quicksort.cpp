//this program implements the quicksort algorithm

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void quickSort(int a[], int size)
{
	int pivot = a[0];
	int* left = new int[size-1]; //int left[size-1]
	int* right = new int[size-1]; //int right[size-1]
	int leftIndex = 0;
	int rightIndex = 0;

	for(int i = 1; i < size; i++)
	{
		if(a[i] < pivot)
		{
			left[leftIndex] = a[i];
			leftIndex++;
		}
		else
		{
			right[rightIndex] = a[i];
			rightIndex++;
		}
	}
	if(leftIndex > 1)
	{
		quickSort(left,leftIndex);
	}
	if(rightIndex > 1)
	{
		quickSort(right,rightIndex);
	}

	int j = 0;
	//add left bucket
	for(int li = 0; li < leftIndex;li++)
	{
		a[j] = left[li];
		j++;
	}
	//add pivot
	a[j] = pivot;
	j++;
	//add right bucket
	for(int ri = 0; ri < rightIndex;ri++)
	{
		a[j] = right[ri];
		j++;
	}
   delete [] left;
   delete [] right;


}

int main()
{
	int A[] = {10, 25, 11, 99 , 42, 27, 76, 81, 10, 24, 11, 98, 90, 17, 34, 45,43, 63};
	
   cout << "Unsorted:\n{";
   for(int i = 0; i < 18; i++)
   {
      cout << A[i] << " ";
   }
   cout << '}' << endl << endl;
   
   cout << "Sorting...\n\n";
   quickSort(A,18);
   
   cout << "Sorted:\n{";
   for(int i = 0; i < 18; i++)
   {
      cout << A[i] << " ";
   }
   cout << '}' << endl;
   
   cin.get();
   return 0;
}