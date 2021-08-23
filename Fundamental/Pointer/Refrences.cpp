/*

Refrences is nickname for other variable. 

references is needed when two varaiables are in different scopes.
(we will have looks through an applications)
*/

#include <iostream>
using namespace std;

//swap function 
void swap(int a, int b){
    int temp = a;
    a=b;
    b= temp;

}


int main() {
    int x = 10;

    //declare and initialize references 
    int &y= x;

    cout<<x <<"\n"<< y;
    //change x and print y to see the change in y 
    x = 15;
    cout<<"\n"<< y<<"\n\n";

    cout<<"application of references \n";
    int a= 5 , b = 1;

    //application 1.
    swap(a,b);
    //pass by references the original value is changed.
    cout<<"The new value of \n a :"<< a << "\t and b :"<<b<<endl;
    

    return 0;

}