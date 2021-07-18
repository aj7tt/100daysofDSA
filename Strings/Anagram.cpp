//check both the strings are anagram to each other

/* 
anagram means : same no of character present in both the strings 

*/

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

//Efficient approach
const int CHAR = 256;

bool isAnagram(string &s1, string &s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int count[CHAR]={0};
    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }

    //
    for(int i=0; i<CHAR; i++) {
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}


// naive approach

bool areAnagram(string &s1, string &s2){
    if(s1.length() != s2.length()){
        return false;
    }
    //sort the strings s1 and s2
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    //check if both the strings are equal
    return (s1==s2);

}

int main(){

    string s1="abaac";
    string s2="aacba";

    cout<<areAnagram(s1,s2);
    cout<<isAnagram(s1,s2);        
}