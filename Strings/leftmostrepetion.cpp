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

//declare a count char    
const int CHAR = 256; 

int leftMostRepeated(string &str){
    //initialse count array to 0 
    int count[CHAR]= {0};
    //transerse the string 
    for(int i=0; i<str.length(); i++){
        //count the frequency of each char 
        count[str[i]]++;
    }
    
    //print index of elemnt which have frquency more than 1 
    for (int i=0; i<CHAR ; i++){
        if(count[str[i]]>1)
            return i;
    }
    
}


//main function
int main(){

    //initialise string
    string str="abcba";

    cout << leftMost(str) << endl<<leftMostRepeated(str);

}

