


#include <iostream>
#include <string>
using namespace std;


void countWords(string &str){

    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            count++; //
        }
    }
    cout<<count;
}

//main function
int main(){
    string str = "this is my instagram username @_Aj7t";
    // cout<<str;
    countWords(str);
    return 0;
}