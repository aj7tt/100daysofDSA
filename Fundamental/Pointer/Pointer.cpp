
#include<bits/stdc++.h>
using namespace std;

int main(){

    //pointer and address 
    int a = 10;
    int *ptr = &a;

    cout<<"Value of a : "<<a;
    cout<<"\nvalue at pointer : "<< *ptr;
    cout<<"\nAdress of a  : "<<ptr;
    cout<<"\nAddress of pointer : "<<&ptr;   
    // cout<<"address of a : "<<*&ptr; 
    // cout<<"address of a  : "<<&*ptr;
    // cout<<"address of a  : "<<&a;

    return 0;

}
 
 