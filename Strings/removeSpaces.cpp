// 2. Remove spaces from a string

/*
All you can do is create a new string, loop through old string and append all characters to new string except for spaces.
*/


#include <iostream>
#include <string>
using namespace std;


string removeSpaces(string str){

    //new string .
    string new_str;
    //tarnsverse: through the string.
    for(int i = 0; i < str.length(); i++){ 
        if(str[i] != ' '){
          new_str += str[i];
        }
    }
    return  new_str;
}

//main function
int main(){
    string str = "this is my instagram username @_Aj7t";
    // cout<<str;
   cout<< removeSpaces(str);
    return 0;
}