#include <iostream>
using namespace std;

//create a node . which contain an data and ref to next node 
struct node
{
    int data;
    node *next;
};

//create a Linkedin_list class
class linked_list
{
private:
    node *head,*tail;
public:
    //construction with initial value NULL  
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    // add new node 
    void add_node(int n)
    {
        //create an temp node 
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    //discard the linked_list
    void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(8);
    a.add_node(6);

    //display the linked_list
    a.display();
    return 0;
}