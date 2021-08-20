/*
pattern-04

  * * * * 
    * * * 
      * * 
        * 

*/

#include <iostream>
using namespace std;

int main() 
{

    int i,j,k,n=5;

    for(i=1; i<n; i++) {

        //print spaces in increasing order 
        for(j=1; j<=i; j++){
            cout<<"  ";
        }

        //print stars in decreasing order
        for(k=n; k>i; k--){
            cout<<"* ";
        }

        cout<<endl;

    }

}
 