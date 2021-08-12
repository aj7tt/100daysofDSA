/***********************
we find the minimum element and placed at position 1 and 
repeat this till the array is sorted.

****************************/


// C++ program for implementation of selection sort

#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		// min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[i])
			// min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[j], &arr[i]);
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
	int arr[] = {11, 25, 12, 22, 63};
	int n = sizeof(arr)/sizeof(arr[0]);

	selectionSort(arr, n);

	cout << "Sorted array: \n";

	printArray(arr, n);

	return 0;
}
 
