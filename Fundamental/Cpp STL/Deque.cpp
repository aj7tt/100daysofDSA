// TODO: Deque STL


#include<bits/stdc++.h>
using namespace std;

int main()
{
    //initialise deque
    deque<int> d;

    //add element 
    d.push_back(2);
    d.push_back(9);
    d.push_back(5);
    d.push_back(1);

    //check if it empty or not 
    d.empty() ==0 ? cout<<"queue is not empty\n" : cout<<"queue is empty";

    //remove elelment
    d.pop_back();
    
    //check elelment at start n end 
    cout<<"First elelment : "<<d.front();
    cout<<"\nLast element : "<<d.back();

    //second element
    cout<<"\nSecond element : "<<d.at(1);

    //elelment in queue are 
    cout<<"\nelement in queue are : ";
    for(int i : d){
        cout<< i << " " ;
    }

    //size of an queue
    cout<<"before erase : " <<d.size()<<endl;

    //delete an element
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase : " <<d.size()<<endl;   


}