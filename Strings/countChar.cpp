
//1. Count uppercase, lowercase, special character, and numeric values in a string
/* 
To approach such a problem you need to know that each character has a special ASCII value that you can check. For example,
uppercase letters range between 65 and 90; therefore you would know that any character that lies between is an upper case
letter. Lucky for you, C++ already evaluates the character using its ASCII value if used with “<“, “>” or “=” operators.
http://www.asciitable.com/
*/


#include <iostream>
#include <string>
using namespace std;


int countChar(string str){

    // create counter for each character
    int count_upper = 0;
    int count_lower = 0;
    int count_special = 0;
    int count_numeric = 0;

    /* transvse through string */
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 65 && str[i] <= 90) {
            count_upper++;
        }
        else if (str[i] >= 97 && str[i] <=122){
            count_lower++;
        }
        else if(str[i] >= 48 && str[i] <=57){
            count_numeric++;
        }
        else {
            count_special++;
        }
    }
    cout <<endl<<"Upper case letters: " << count_upper << endl << "Lower case letters : "<<count_lower <<endl <<"Number : "<< count_numeric << endl<<  "Special characters : " <<count_special;
}

//main function
int main(){
    string str = "@_Aj7t";
    cout<<str;

    countChar(str);
    return 0;
}