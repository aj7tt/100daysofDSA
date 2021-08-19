//Merge sort implementation 

#include <bits/stdc++.h>
using namespace std;


//Naive approach
void merge(int a[], int b[], int m, int n){
    //take a new array c 
    int c [n+m];

    //insert array 1 into c 
    for(int i=0; i<m; i++){
        c[i]= a[i];

    }

    //insert array 2 into c
    for(int i=0; i<n; i++){
        c[m+i]= b[i];
    }

    //sort the new array
    sort(c, c+m+n);

    //display the array
    for(int i=0; i<n+m; i++) {
        cout<<c[i]<< " ";
    }
}

//Efficient method 

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

 


int main(){
    //declare and initialize array
    int a[] = {10,1,5,20,20};
    int b[] = {1,12};

    //size of array
    int m = sizeof(a)/ sizeof(a[0]);
    int n = sizeof(b)/ sizeof(b[0]);

    //call the function
    merge(a,b, m, n);

    return 0;

}