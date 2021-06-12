/*
pattern-01 
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

        //print * in increasing order of (i+1 cols)
        for(j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl; //new line
    }

}



