//STACK STL 

#include<iostream>
#include<stack>
using namespace std;


int main()
{
    //intiliase the stack 
    stack<int> s;

    //add element in stack
    s.push(7);
    s.push(5);
    s.push(6);

    //check is the stack empty
    cout<<s.empty();

    //check the size of stack
    cout<<s.size();

    //check the top element
    cout<<s.top();



}