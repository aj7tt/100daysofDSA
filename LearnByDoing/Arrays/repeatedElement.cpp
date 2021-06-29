/*
Question 4:
Given an array, a[] and an element x, find a number of occurrences of x in a[]

*/


#include <iostream>
using namespace std;

int main() {
    
    int a[5]={2,6,4,2,2};
    int ele;
    cin >> ele;

    int count=0;
    
    
    //find count of occurrences an array
    for(int i=0; i<5; i++){
        if(a[i]==ele)
            count++;
    }
    cout<< count<< endl;
    return 0;
    
}  