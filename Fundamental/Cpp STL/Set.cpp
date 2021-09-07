//TODO: set STL 

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    //insert element
    s.insert(4);
    s.insert(5);
    s.insert(6);

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i : s) {
        cout<<i<<endl;
    }

    set<int>::iterator itr = s.find(6);

    for(auto it=itr; it!=s.end(); it++) {
    cout<<*it<<" ";
    } 


}