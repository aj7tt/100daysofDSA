/******************************************************************************
Problem Statememnt :: BINARY SEARCH 
this algorithum is used when the array is sorted. 

 steps to solve this problem :
1. find mid values of the array (start-end/2)
2. check if mid values == x (no to be searched)
    I. if arr[mid] ==x return arr[mid]
    II. if arr[mid] > x then end = mid-1 
    III. if arr[mid] < x then start = mid+1.
    if not found return -1  
*******************************************************************************/

#include <iostream>
using namespace std;


/*===========================================
     FUNCTION FOR Binary search 
============================================*/
/**************** Iteration *******************/

//sorted array only
int BinarySearch(int array[], int n, int key, int start, int end)
{
    int mid;
    //tarnsverse the loop
    while(start <= end){
        mid = (start +end)/2;       //find mid values

    //check if mid ==key 
        if(array[mid]==key){
            return mid;
        }

        //check if mid > key
        else if (array[mid] > key){
            end = mid - 1;
        }

        //check if mid < key
        else if(array[mid] < key){
                start = mid + 1;
        }
 
    }
    return  -1;
};



/*************Recrusive Function ******************/
int bSearch(int array[], int start, int end, int key){
    //if start is less than end ---> return flse
    if(start > end){
        return -1;
    }

    int mid = (start + end) / 2;

    if(array[mid] == key)
        return mid;

    else if(array[mid]> key){
        // if mid is greater than key make end as mid-1 in function as key must be present in left subarray
        return bSearch(array, start, mid - 1 , key);
    }

    // else in the right subarray
    return bSearch(array,mid+1,start, key);
}


int main()
{
    //declare and initialize an array
    int array[] = {20, 25, 40, 56, 64, 70, 82};

    //length of the array
    int n = sizeof(array) / sizeof(array[0]);
    // no to be searched
    int key = 21;

    // declare and initialize start and end index of an array 
    int start = 0;
    int end = n - 1;

    //call the function
    cout<<BinarySearch(array,n, key,start, end);

    int result=bSearch(array, start, end, key);
    (result == -1) ? cout << "Element not found!"
                   : cout << "Element is present at index " << result;
  

    return 0;
}