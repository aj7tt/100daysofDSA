
#include <iostream>
#include <string.h>
using namespace std;

int main() { 

    /* 
    char s1[]= "gfg";
    char s2[]= "abc";
    int res= strcmp(s1,s2);
    cout<<res<<endl; */

    string str="geeksforgeeks";
    string str2="udemy";

    int length= str.length();
    cout<<length<<endl;

    str=str+"ajit";
    cout<<str<<endl;

    cout<<str.substr(1,3)<<endl;

    cout<<str.find("ajit")<<endl;

    cout<<(str==str2)<<endl;

    //reading a string from console
    //getline(cin, str,'a');

    //iteration in string 
    for(int i=0; i<str.length(); i++){
        cout<<str[i];
    }
/*
    int x;
    for(char x : str2)
        cout<<x;
*/
    
}