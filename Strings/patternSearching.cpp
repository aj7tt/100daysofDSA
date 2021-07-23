/******************************************************************************

Problem Statememnt TODO:
You have given two strings pattern string and a text string. You have to print the positions of occurrences of pattern in the text by comparing each letter of pattern with the text string

Input:-
text=”I’m a coder, competitive coder!!”
pattern=”coder”

Output:-
Found at index 6
Found at index 25

*******************************************************************************/

#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;


/*===========================================
     FUNCTION FOR PATTERN SEARCHING
============================================*/


//naive method for searching
int patSearching(string &text, string &pattern){
    //length of text && pattern
    int n = text.length();
    int m = pattern.length();

    for(int i = 0; i <n-m; i++){
        int j;
        for(j = 0; j <m ; j++){
            //check if the pattern matches into text .
            if(pattern[j] != text[i+j]){
                break;          // if not simplily break the loop.
            }
        }
        //if the pattern length fit into text than  print the index 
        if(j==m){
            cout<< i << " " ;
        }

    }
}

// Efficient naive method 
int naiveSearching(string text, string pattern){
    //length of pattern and text.
    int n = text.length();
    int m = pattern.length();

    // if(m >n)
    //     return -1;

    //transverse the string characters
    for (int i = 0; i <n-m; i++){
        //transverse inner loop characters
        int j;
        for (j = 0; j < n; j++){
            //condition 
            if(pattern[j] != text[i+j]){
                break;
            } 
        }
        if(j == m)
        {
            cout << i << " ";
            i =i+ m;
        }
        else if (j==0)
            i++;
        else
            i += j;     // slide the pattern by j
    }
}


/*===========================================
                MAIN FUNCTION
============================================*/
int main() {
    // text
    string text= "acabdeabcdabcd";

    //pattern
    string pattern = "abcd";

    //call the function
     cout<<naiveSearching(text, pattern);
     cout <<endl<< "The string found at index: ";
     cout << patSearching(text, pattern);

     return 0;
}