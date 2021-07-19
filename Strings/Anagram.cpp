//check both the strings are anagram to each other

/* 
anagram means : same no of character present in both the strings in order/inorder manner 
frequency and char need to be same , while order can different 

*/

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;



// naive approach

bool areAnagram(string &s1, string &s2){
    //returns false if the length (frequency) of both the string isn't same 
    if(s1.length() != s2.length()){
        return false;
    }
    //sort the strings s1 and s2
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    //check if both the strings are equal
    return (s1==s2);

}


//Efficient approach
// initilaise count array of 256
const int CHAR = 256;

bool isAnagram(string &s1, string &s2){
    // if length is not same 
    if(s1.length() != s2.length()){
        return false;
    }
    // transverse the strings.......
    //initilaize count array to 0
    int count[CHAR]={0};
    for(int i=0; i<s1.length(); i++){
        //count the frequency of ech character 
        count[s1[i]]++;         // increase for i 
        count[s2[i]]--;         // decrease for j
    }

    //if the count of both the string is 0 , that means having same frequency of chars 
    for(int i=0; i<CHAR; i++) {
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}



int main(){

    string s1="abaac";
    string s2="aacba";

    cout<<areAnagram(s1,s2);
    cout<<isAnagram(s1,s2);        
}
