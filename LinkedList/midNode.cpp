//Find the middle of a given linked list


#include<iostream>
using namespace std;

//create a node
struct Node {
    int data ;
    Node* next;

};

class midNodeofList
{
    private:
    Node* head; //head pointer

    public:
    //methods

    //fun to get the node in linked list
    // int insertEnd(int value){
    //     //create a neew nodes
    //     Node* new_node = new Node;
    //     new_node->data = value;
    //     new_node->next = NULL;

    //     //check if the LL is empty
    //     if(head == NULL)
    //     {
    //         head = new_node;
    //     }
    //     else
    //     {
    //         //declare a temporary node 
    //         Node* temp = head;
    //         while(temp != NULL)
    //         {
    //             temp = temp->next;
    //         }
    //         temp ->next = new_node;
    //     }
    // }
    
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



    //function to get the mid node of LL
    void midNode()
    { 
        //1. initialise the two node pointing to 
        Node *mid = head;  
        Node *last = head;  
      
        if (head!=NULL)  
        {  
            while (last != NULL && last->next != NULL)  
            {  
                last = last->next->next;  
                mid = mid->next;  
            }  
            cout<<"The middle Node is: "<<mid->data;  
        }  
    }
    
    
    
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

// main function
int main()
{
    //Find the middle of of a given linked list
    midNodeofList mnl;

    mnl.insertStart(2);
    mnl.insertStart(5);
    mnl.insertStart(8);
    mnl.insertStart(4);
     mnl.insertStart(10);
    cout<<"the Node in LL : ";
    mnl.display();
     
    mnl.midNode();

}