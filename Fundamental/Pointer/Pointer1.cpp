 

//pointer problems 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {12, 34, 13};
    char arr1[] = {'a', 'j', 'i', 't'};

    //int pointer
    int *ptr = arr;

    //char pointer
    char *ptr1 = arr1;

    //size of int = 4 X 3
    cout<<sizeof(arr)<<"\n";
    //size of pointer 
    cout<<sizeof(ptr)<<"\n";


    cout<<sizeof(arr1)<<"\n";
    //size of char = 1 X 4

    //size of pointer remains same :
    cout<<sizeof(ptr1)<<"\n";

    return 0;
    
} 