//algorithm 


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    //declare and initialize an array 
    vector<int> v;

    v.push_back(1);
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(5);

    //search the number  
    cout<<"elemnt is present : "<<binary_search(v.begin(), v.end(),3);

    //find the max no
    int a = 2;
    int b=5;
    cout<<"\nmax element : "<< max(a,b)<<endl;

    //swap the elements
    swap(a,b); 

    //reverse the string 
    string str = "geeksforgeeks";
    reverse(str.begin(), str.end());
    cout<<"reverse string is : "<< str<<endl;


    //rotate the elements
    rotate(v.begin(),v.begin()+v.size()-1,v.end()); 
    cout<<"After rotate : ";
    for(int x : v){
        cout<<x << " ";
    }

    //sort the elements
    sort(v.begin(),v.end());
    cout<<"\nsorted elements : ";
    for(int x:v)
        cout<< x << " ";



    
}