/*
. Count the number of words in a string
In this problem, we know that words are typically separated with spaces. Therefore, what you can do is loop through your string
and count the separators

solution = count tye number of spaces +1

*/

#include <iostream>
#include <string>
using namespace std;


void countWords(string &str){

    //create variable counter of type integer 
    int count = 0;

    // transverse through each characters in string
    for (int i = 0; i < str.length(); i++){
        // Check if current char is a space 
        if(str[i] == ' '){
            count++; //
        }
    }
    //* increment the counter one last time for the last word
    count++;
    cout<<count;
}

//main function
int main(){
    string str = "this is my instagram username @_Aj7t";
    cout << str<<endl;
    countWords(str);
    return 0;
}