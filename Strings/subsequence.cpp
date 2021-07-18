#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

//function for susequenece
bool isSubsequence(string &s1, string &s2){
    // transverse for A
    int m= s1.length();
    int n= s2.length();
    int j=0;
    for(int i= 0; i < n && j < m; i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==m);

}

int main(){
    // take string 1 
    string s1 = "ABCD";
    string s2 = "AD";

    isSubsequence(s1, s2);
}