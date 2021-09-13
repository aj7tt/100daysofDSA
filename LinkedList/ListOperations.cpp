//Traversal, Insertion, Deletion, ###Searching, Sorting and Merging

#include <iostream>
using namespace std;

// Making a node struct containing a data int and a pointer to another node
struct Node { 
  int data;      // variable to store the data of the node
  Node *next;    // variable to store the address of the next node

};

class LinkedList
{
    // Head pointer
    Node* head;
 
  public:
    // default constructor. Initializing head pointer
    LinkedList()
    {
      head = NULL;
    }
 

    //TODO: inserting elements (At start of the list)

    void insertStart(int val)
    {
      //1. make a new node
      Node* new_node = new Node;   
      new_node->data = val;
      new_node->next = NULL;

      //2. check If list is empty, make the new node the head
      if (head == NULL)
        head = new_node;
      //3. else, make the new_node the head and its next, the previous head
      else
      {
        //4. store address of head to new_node
        new_node -> next = head;

        //5. make a new node the head
        head = new_node;
      }
    }
                                                                    @_aj7t

    void insertEnd(int val)
    {
      //1. make a new node
      Node* new_node = new Node;   

      //2. assign data and ref to node
      new_node->data = val;
      new_node->next = NULL;

      /****************
      we need to declare a temporary pointer temp in order to traverse through the list. 
      temp is made to point the first node of the list.
      
      *************/

      //3. declare a temporary node 
      Node* temp = head; 

      /*FIXME:Check the Linked List is empty or not if empty make the new node as head  else */

      //4. Transvse till the last node
      while( temp ->next != NULL){
        temp = temp -> next;        
      }

      //5. Change the next of last node to new node
      temp -> next = new_node; 
    }      

    //TODO: insertion at Given position

    int insertAtPos(int val, int pos)         
    {
      //1. create a node 
      Node* new_node = new Node;
      new_node -> data = val;
      new_node -> next = NULL;

      //FIXME: check if the linked list is empty?? check for Invalid pos

      //2. create a node for transvering
      Node *temp = head;

      //3. traverse till position we wanna insert
      for (int i = 0; i < pos - 1; i++)
      {
        temp = temp->next;
      }
      //4. Initialize the address of next position(pos+1) node to new node
      new_node-> next =temp->next;

      //5. assign the address of new node to pos node
      temp -> next = new_node;
    }                                             @_aj7t                                                                                        



    //TODO: SEARCHING
    // loop over the list. return true if element found
    bool search(int val)
    {
      //1. declare a temporary node 
      Node* temp = head;

      //2. traverse till the 
      while(temp != NULL)
      {

        if (temp->data == val)
          return true;
        temp = temp->next;
      }
      return false;
    }


    //TODO: DELETION
    void remove(int val)
    {
      // If the head is to be deleted
      if (head->data == val)
      {
        delete head;
        head = head->next;
        return;
      }

      // If there is only one element in the list
      if (head->next == NULL)
      {
        // If the head is to be deleted. Assign null to the head
        if (head->data == val)
        {
          delete head;
          head = NULL;
          return;
        }
        // else print, value not found
        cout << "Value not found!" << endl;
        return;
      }

      // Else loop over the list and search for the node to delete
      Node* temp = head;
      while(temp->next!= NULL)
      {
        // When node is found, delete the node and modify the pointers
        if (temp->next->data == val)
        {
          Node* temp_ptr = temp->next->next;
          delete temp->next;
          temp->next = temp_ptr;
          return;
        }
    
        temp = temp->next;
      }

      // Else, the value was never in the list
      cout << "Value not found" << endl;
    }


    //TODO: Transversal
    void display()
    {
      Node* temp = head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }
};


//TODO: DRIVER CODE
int main() {
  
  //create an obj
  LinkedList l;

  // inserting elements
  l.insertStart(9);
  l.insertStart(1);
  l.insertStart(3);
  l.insertStart(7); 
  l.insertEnd(10);
  l.insertEnd(60);
  l.insertEnd(100);
  l.insertAtPos(500, 3);
  l.insertAtPos(500, 7);

  
  
  //display th linked_list
  cout << "Current Linked List: ";
  l.display();

//delete the node 
  cout << "Deleting 1 ";
  l.remove(1); 

  cout << "Deleting 500 ";
  l.remove(500);
 cout<<endl;
 
//search the node in the list
  cout << "Searching for 7: ";
  cout << l.search(7) << endl;

  cout << "Searching for 13: ";
  cout << l.search(500) << endl;
    
  l.display();

}
