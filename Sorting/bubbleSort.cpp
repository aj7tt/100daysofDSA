/**************************************************************
 
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them if they are not in the intended order.

Working of Bubble Sort
Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)

Starting from the first index, compare the first and the second elements.
If the first element is greater than the second element, they are swapped.
Now, compare the second and the third elements. Swap them if they are not in order.
The above process goes on until the last element.

 ****************************************************************/
 

// C++ program for implementation of Bubble sort

#include <bits/stdc++.h>
using namespace std;

//swapping function for  two elements
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
    // loop to access each array element
	for (i = 0; i < n-1; i++)	
         // loop to compare array elements
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
         // compare two adjacent elements
            if (arr[j] > arr[j+1])
            // perform swapping
                swap(&arr[j], &arr[j+1]);
}

 

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
 
	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}
 
