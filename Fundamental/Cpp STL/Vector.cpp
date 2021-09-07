//TODO: Vector STL 
//Vector being a dynamic array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //. Initializing em empty vector:
    vector<int> vect;

    //Specifying size and initializing all values
    //here n=3 and values = 10 
    vector<int> vec(3,10);

    //initializing vector as array
    vector<int> v{1,2,3,4,5,6,7};

    //display the vector
    for(int i : v){
        cout<< i << " " ;
    }

    //capacity
    cout<<"\nCapacity : "<<v.capacity();

    //add elelment in vector
    v.push_back(8);
    v.push_back(9);

    //delete elemnt in vector
    v.pop_back();

    //This method returns the number of elements that can be inserted in the vector based on the memory allocated to the vector.
    cout<<"\nNew Capacity : "<<v.capacity();

   cout<<"front element : " <<v.front()<<endl;
   cout<<"back element : " <<v.back()<<endl;

    cout<<"before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size : "<<v.size()<<endl;



    return 0;


}