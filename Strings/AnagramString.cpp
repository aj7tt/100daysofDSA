/******************************************************************************
Check whether two strings are anagram of each other
  
An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “abcd” and “dabc” are an anagram of each other.
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

/*===========================================
     FUNCTION FOR PATTERN SEARCHING
============================================*/
// Method 1 (Use Sorting)  
 
 bool areAnagram(string &str1, string &str2){

     //length of the string
    int n = str1.length();
    int m = str2.length();

     //short both the string
     sort(str1.begin(), str1.end());
     sort(str2.begin(), str2.end());

     //conditions  for anagram
     if(n != m){
         return false;
     }

     // check the character of both the string aare same or not.
     for(int i=0; i<n; i++){ 
             if(str1[i] != str2[i])
                return false;
     }
     return true;

 }

// Method2 Count character
// initilaise char value as 256

bool are_Anagram(string &str1, string &str2){
   
    // Create a count array and initialize all values as 0
    int count[256] = { 0 };
    int i;
 
    // For each character in input strings, increment count
    // in the corresponding count array
    for (i = 0; i<str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
 
    // If both strings are of different length. return false 
    
    if (str1[i] || str2[i])
        return false;
 
    // See if there is any non-zero value in count array
    for (i = 0; i < 256; i++)
        if (count[i])
            return false;
    return true;
}



/*===========================================
                MAIN FUNCTION
============================================*/
 
 int main(){
     string str1 = "silent";
     string str2 = "listen";

     cout<<areAnagram(str1, str2);
     cout<<endl <<are_Anagram(str1, str2);

     return 0;
 }







