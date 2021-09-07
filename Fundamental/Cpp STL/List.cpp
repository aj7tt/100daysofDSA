// TODO: List STL

/********************
Array and Vector are contiguous containers, i.e they store their data on continuous memory, thus the insert operation at the middle of vector/array is very costly (in terms of number of operaton and process time) because we have to shift all the elements, linked list overcome this problem. Linked list can be implemented by using the list container.
_______________________________________________________________

C++ List Functions

Function	Description
insert()	This function inserts a new item before the position the iterator points.
push_back()	This functions add a new item at the list’s end.
push_front()	It adds a new item at the list’s front.
pop_front()	It deletes the list’s first item.
size()	This function determines the number of list elements.
front()	To determines the list’s first items.
back()	To determines the list’s last item.
reverse()	It reverses the list items.
merge()	It merges two sorted lists.
*************************************/

#include<list>
#include<iostream>
using namespace std;

int main()
{
    //initialise the list
    list<int> l1{1,2,3,4,5,6};

    list<int> l2{12,45,85,23,10};

    //Member Functions of List Container
    /******
        FIXME:insert(iterator, element) : inserts element in the list before the position pointed by the iterator.
        insert(iterator, count, element) : inserts element in the list before the position pointed by the iterator, count number of times.
        insert(iterator, start_iterator, end_iterator): insert the element pointed by start_iterator to the element pointed by end_iterator before the position pointed by iterator ***/

    for(int x : l1)
    {
        cout<< x << " " ;
    }

//add element in list

    //from back
    l1.push_back(5);
    l1.push_back(10);
    //from front
    l1.push_front(99);
    //in middle 

//Delete element from list 
    l1.erase(l1.begin());

    cout<<l1.size();
 
 



}