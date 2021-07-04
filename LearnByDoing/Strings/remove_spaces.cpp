// remove spaces from the string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[20]={"ajit kumar"};
    int i=0,j=0;
    
    while(s[i])
    {
        if(s[i]!=' '){
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]='\0';
    cout<<s;

    return 0;
}