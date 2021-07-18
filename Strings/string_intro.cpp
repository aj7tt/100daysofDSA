#include <string>
#include <iostream>
using namespace std;

int stringFunction(string str);
int main(){
    
   /* string str="geeksforgeeks"
    int count;
    count[26]={0};

    for(int i=0; i<str.length(); i++){
        count[str[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(count[i]>0){
            cout<<(char)(i+'a')<<" "<<count[i]<<endl;
        }
    }

    char str3[]="gfg";       // here its use \0
    char str2[]={'g','f','g'};

    */
    string str="geeksforgeeks";
    
    cout<<stringFunction(str);
    return 0;
}
//functions in string
/*
strlen(str)
strcmp(s1,s2)
strcpy(s1,s2)   -> to initialise to null str
*/


int stringFunction(string str){
    int length=str.length();
    return length;
}