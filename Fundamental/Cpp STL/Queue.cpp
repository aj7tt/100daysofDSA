//TODO: QUEQE STL 

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //initialise
    queue<string> q;

    //add elements
    q.push("ajit");
    q.push("kumar");
    q.push("ydv");

    //reove elements
    q.pop();
    q.pop();

    //size of queue
    cout<<q.size()<<endl;

    //elelmts in queue;
    cout<< q.front();

    //TODO: Priority queue
    cout<<"\npriority queue \n";

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    cout<< pq.size()<<endl;

    cout<<"khaali h kya bhai  ?? : "<<pq.empty()<<endl
    
}