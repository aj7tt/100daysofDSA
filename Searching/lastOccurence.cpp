/******************************************************************************

Problem Statement :: 
Find the index of 1st occurrence element in the array 

input = array{2,3,4,5,5,5,5,5}
key = 5
output : 7

*******************************************************************************/



// CPP program for the above approach
#include <iostream>
using namespace std;

/*===========================================
     FUNCTION for Last occurence search 
============================================*/

int findIndex(int arr[], int N, int Key)
{
     
    // Traversing the array from last position
    for (int i = N; i >= 0; i--) {
        if (arr[i] == Key)
            return i;
    }
    return -1;
}

/*************using Recursive function *****************/

int LastIndex(int arr[], int N, int Key) {
    
    // Base Case
    if(N < 0) {
        return -1;
    }

    // Return Statement
    //if the last element is key then return else use recirsive function from N-1 position 
    if( arr[N] == Key) {
        return N;
    }

    // Recursive Call
    return LastIndex(arr, N-1, Key);
    
}
 

/**************binary search iteration methd *************/

// Function to find the first occurrence of a given number
// in a sorted integer array
int findLasttOccurrence(int arr[], int n, int key)
{
    // search space is `arr[low…high]`
    int low = 0, high = n - 1;
 
    // initialize the result by -1
    int result = -1;
 
    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and compares it with the target
        int mid = (low + high)/2;
 
        // if the target is located, update the result and
        // search towards the left (lower indices)
        if (key == arr[mid])
        {
            result = mid;
            low = mid + 1;

        }
 
        // if the target is less than the middle element, discard the right half
        else if (key < arr[mid]) {
            high = mid - 1;
        }
 
        // if the target is more than the middle element, discard the left half
        else {
            low = mid + 1;
        }
    }
 
    // return the leftmost index, or -1 if the element is not found
    return result;
}

// Driver Code
int main()
{
 
    int arr[] = { 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int N = sizeof(arr) / sizeof(arr[0]);
    int Key = 6;
 
    // Function call
    cout << LastIndex(arr, N - 1, Key);
    findLasttOccurrence(arr, N, Key);

    return 0;
}
