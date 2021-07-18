/*
Pattern-05

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

*/

#include <iostream>
using namespace std;

int main() 
{

    int i,j,k,n=5;

    for(i=0;i<= n; i++){

        //print spaces in decreasing order
        for(j=n; j>i; j--){
            cout<<"  ";
        }

        //print stars in  increasing order (i+2)
        for(k=1; k<=2*i-1; k++){
            cout<<"* ";
        }

        cout<<endl;
    }

}    