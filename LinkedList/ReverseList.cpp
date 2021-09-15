 //Reverse the linked list

#include<iostream>
using namespace std;

//create a node
struct Node {
    int data ;
    Node* next;

};

class ReverseList{
    
    private:
    
    //pointer 
    Node* head;
    
    //method 
      void displayRecrusively(Node* head)
      {
        if(head == NULL)
            return;
        else 
            cout<<head -> data <<" ";
            
        displayRecrusively(head -> next);
    }

    public:
    //constructor
    ReverseList()
    {
        head = NULL;
    }
    
    
    //methods 

    int insertStart(int val)
    {
        //make a new node
        Node* new_node = new Node;
        new_node -> data = val;
        new_node->next = NULL;

        //check if the linked list is empty
        if(head == NULL){
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;

        }
    }
    
    //display Recrusively 
    void displayRecrusively()
    {
        displayRecrusively(head);
    }
    
    void reverseLinkedList()
    {
        // Initialize current, previous and next pointers
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // declare next
            next = current->next;
 
            // change address of prev node to current (reversing)
            current->next = prev;
 
            // Move pointers++ one position ahead.
            prev = current;
            current = next;
        }
        //head pointing to last node
        head = prev;
    }
                                                        //@_aj7t
};

int main()
{
    //create an obj 
    ReverseList rl;

    rl.insertStart(7);
    rl.insertStart(6);
    rl.insertStart(8);
    cout<<"current LL is : ";
    rl.displayRecrusively() ;
    
    cout<<"\nReverse LL is : ";
    rl.reverseLinkedList();
    rl.displayRecrusively();

}
