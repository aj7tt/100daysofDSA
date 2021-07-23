/* TODO: 
Count the number of word occurrences in a string
loop through your string until you find a character that matches the first character in your word;
create a substring using the current index and the length of the word you are looking for;
increment your counter if the 2 strings are identical.
Here we will need to use a new function called __substr()__. Simply, this function creates a substring from a string using __2
arguments__, start index and length of the new string.

*/


#include <iostream>
#include <string>
using namespace std;


void word_occurrences(string &str, string &word){

    /* create word counter variable */
    int count = 0;
    /* create temporary word of type string for comparison with original word */
    string temp_word;
    /* loop through string */
    for(int i = 0; i < str.length(); i++)
    {
    /* if current char matches first char in the word */
        if ( str[i] == word[0] )
        {
        /* create a temporary string with the same word size */
        temp_word = str.substr(i, word.length() );
        /* check if the temporary word matches the original word */
            if ( temp_word == word )
            {
                /* increment your counter in such case */
                count++;
            }
        }
    }
    cout << "Number of occurrences: " << count << endl;

}

//main function
int main(){
    string str = "i love to code because coding is fun 💻";
    string word = "cod";
    cout << str;
    word_occurrences(str, word);
    return 0;
}