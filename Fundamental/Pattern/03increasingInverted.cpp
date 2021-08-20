/*
Pattern-03
        * 
      * * 
    * * * 
  * * * * 
* * * * *  
*/

#include <iostream>
using namespace std;

int main()
{

    int i,j,n=5;

    //print i number of stars (rows)
    for(i=1; i<=n; i++){

        //print spaces in descreasing order  
        for(j=n; j>i; j--) {
            cout<<"  ";
        }

        // print star in increasing order
        for(int k=1; k<=i; k++){
            cout<<"* "; 
        }

        cout<<endl; //new line
    }

}


// approach ( use desending +  acending order )