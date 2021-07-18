
#include <iostream>
#include <string>
using namespace std;

void patSearching(string &text, string &pattern){
    //length of text && pattern
    int n = text.length();
    int m = pattern.length();

    for(int i = 0; i <n-m; i++){
        for(int j = 0; j <m ; j++){
            //check if the pattern matches into text .
            if(pattern[j] != text[i+j]){
                break;          // if noy simplily break the loop.
            }
        }
        //if the pattern length fit into text than  print the index 
        if(j==m){
            cout<< i << " " ;
        }

    }
}

int main(){

    //initialize string for tetx andn  pattern 
    string text= "geeksforgeeks";

    string pattern="geeks";

   cout<<patSearching(text,pattern);

}