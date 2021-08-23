//simple program to craete a 3 node  in list


#include<bits/stdc++.h>
using namespace std;

//create a node 
struct node {
    int data ;
    node *next ;

    //constructor
    node(int x){
        data = x;
        next = NULL;
    }
};

void displayList(node *head){
    //create a new node current 
    node *curr = head;
    while (curr != NULL){
        cout<<curr->data<<"\n";
        curr = curr->next;

    }
    
}

//driver code 
int main(){
    //assign value to head n node 
    node*head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    
    //when constructor is not craeted 
    //head -> data = 10;

    //display the linked list
    displayList(head);

    return 0;

}