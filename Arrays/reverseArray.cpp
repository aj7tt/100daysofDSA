/*
Question 3:
Given an array, the task is to reverse the array

*/


 #include <iostream>
using namespace std;
int main()
{
     
    int a[5] = {3,6,7,1}; 
    
    int rev;
    
    int start=0,end=4;
    
    while (start < end)
    {
        rev = a[start];
        a[start] = a[end];
        a[end] = rev;
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}


/********************



void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}



*/