/*
write an prohramm to take input from user in an array and display.

*/

#include <iostream>
using namespace std;

int main (){

    //Declare and array
    int a[5];

    //take input from user
    for (int i = 0; i <5; i++){
        cin>>a[i];
    }

    //display the elements of an array 
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
