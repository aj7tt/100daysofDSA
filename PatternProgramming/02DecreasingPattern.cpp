/*
pattern-02 
* * * * 
* * * 
* * 
* 

*/

#include <iostream>
using namespace std;

int main() {

    int i,j, n=5;

    //print i number of stars (rows)
    for(i=1; i<=n; i++){

        //print starts in descending order
        for(j=n; j>i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*****************************************************/
