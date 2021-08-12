/***********************
  A sorting algorithm which selects one element from the array and is compared to the one side of the array.
   Element is inserted to the proper position while shifting others.

****************************/


// C++ program for implementation of Insertion sort

#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void InsertionSort(int arr[], int n)
{
	int i, j;

    for(int i=1; i<n; i++)
    {
        //compare current value with prev  value
        int value = arr[i];
        int index = i;

        while(index > 0 && arr[index-1] > value){
            swap(&arr[index], &arr[index-1]);
            index--;
        }

        arr[index] = value;
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{ 
	for (int i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program to test above functions
int main()
{
	int arr[] = {10, 25, 1, 22, 63};
	int n = sizeof(arr)/sizeof(arr[0]);

	InsertionSort(arr, n);

	cout << "Sorted array: \n";

	printArray(arr, n);

	return 0;
}
 
