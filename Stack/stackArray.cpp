
/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>
using namespace std;

#define MAX 10

class Stack {
	int top;

public:
	int a[MAX]; // Maximum size of Stack  into an array

    //constructor
	Stack()
    {
        top = -1;
    }

    //method
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x)
{
    //check is stack is full??
	if (top >= (MAX-1)) {
		cout << "Stack Overflow";
		return false;
	}
	//if the stack have space , do insert element
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}
//remove elements from stack array
int Stack::pop()
{
    //check is the stack empty ??
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}

//check the top elemnt 
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		cout<<"Element at top is : "<< x;
	}
}

// Method to check the stack isEmpty()
bool Stack::isEmpty()
{
	return (top < 0);
}

// Driver program to test above functions
int main()
{
	class Stack s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.peek();
 	cout<<"\n"<<s.isEmpty();
 	s.pop();
 	


	return 0;
}
