/* 
Question 2:
Given an array, write program to find the sum of all elements

*/

#include <iostream>
using namespace std;

int main() {
    
    int a[5]={2,6,4,0,2};
    
    int sum=0;
    
    
    //print sum 
    for(int i=0; i<5; i++){
        sum+=a[i];
    }
    cout<<sum << endl;
    return 0;
    
}  