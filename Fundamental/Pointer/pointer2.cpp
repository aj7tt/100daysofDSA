
// 
#include<iostream>
using namespace std;

int main() {

    int arr[] = {10, 34, 13};

    int *ptr = arr;

    // ++*ptr ;
    /********************
    presence is same 
    Associative is same
    ++(*ptr)

    ************************/

   *ptr++;
   // *(ptr++)

    // *++ptr;   
    //*(++PTR) no value is changd

    cout<<arr[0] << arr[1]<< *ptr;

    return 0;
}