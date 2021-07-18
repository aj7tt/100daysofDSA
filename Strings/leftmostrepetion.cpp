//leftmost repeating element

#include <string.h>
#include <iostream>
using namespace std;

//naive approach
int leftMost(string &str){
    
    // transverse the srring 
    for(int i = 0; i <str.length(); i++){
        for(int j = i+1; j < str.length(); j++){
            if(str[j]==str[i]){
                return i;
            }
        }
    }
    return -1;
}

// efficient approach

int leftMostRepeated(string &str){
    
}



//main function
int main(){

    //initialise string
    string str="abcba";

    cout << leftMost(str) << endl;

}

