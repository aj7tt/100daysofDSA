
// Given an array : split this array onto two sub array and use merge function to print sorted array 

#include <bits/stdc++.h>
using namespace std;



//this functions merges the two arrays
void mergeFunction(int a[], int b[], int m, int n){
    // condition for loops to run 
    int i=0, j=0;
    while (i < m ||  j < n){
        //compare the value from both the index 
        if(a[i] <= b[j]){
            cout<<a[i]<< " ";
            i++;
        }
        else{
            cout << b[j]<< " ";
            j++;
        }
    }

    //add the rest of elemnts 
    while(i<m){
        cout<< a[i]<< " ";
        i++;
    }
    while(j<n){
        cout<<b[j]<< " ";
        j++;
    }
}


//this fumctions splits the array into two half
void mergeDivide(int arr[], int n) {
    //we need to spit the array
    int low = 0;
    int high = n-1;

    int mid = low + (high - low)/2 ;

    //size of two new array
    int n1 = mid-low +1 ;
    int n2 = high-mid;
    
    //take two diff new array with size n1 & n2
    int left[n1];
    int right[n2];

    //insert element in both the array 
    for(int i=0; i<n1; i++){
        left[i]= arr[low+i];
    }

    for(int i=0; i<n2; i++){
        right[i] = arr[n1+i];
    }

    //print both the new array
    cout<<"This is Array Left: \n";
    for(int i=0; i<n1; i++){
        cout<< left[i]<< " ";
    }
    
    cout<<endl;
    cout<<"This is Array Right: \n";
    for(int i=0; i<n2; i++){
        cout<< right[i]<< " ";
    }

    cout<<endl;
    cout<<"This is sorted array using merge sort : \n";
    
    //call the merge function
    mergeFunction(left, right, n1,n2);

}




int main() {
    // declare and initialize array
    int  arr[] = {10, 20, 40, 20 , 30, 60};
    cout<<"The element in the array are : \n";

    //calculate the side of an array
    int size = sizeof(arr)/sizeof(arr[0]);

    //call the function
    mergeDivide(arr, size);

    return 0;
}