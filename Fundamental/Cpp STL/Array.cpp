

// TODO:Arrays STL
// the size of an  array cannot be changes and hence we need to declare an array with a max size.

#include<iostream>
#include<array>
using namespace std;

int main(){
  // Create an empty array 
  array<int,4> arr;

  //max size of an  array
  cout<<"Max size of an array is : "<<arr.max_size();

  //take the size of array 
  int n;
  cout<<"\nEnter the size of an array : ";
  cin>> n;

  //take elements of an array 
  for(int i=0; i<n; i++){
    cin>> arr[i];
  }

  //size of an updated array
  int size = arr.size();

  //display the elemnts in array 
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }


  //check if array is empty
  cout<<"\nEmpty or not : "<<arr.empty();

  //first element
  cout<<"\nfirst element : "<<arr.front();

  //last element
  cout<<"\nLast element : "<<arr.back();

  //Element at index 2 && 3
  cout<<"\nElement at index 2 :"<<arr.at(2);
  cout<<"\nElement at index 2 : "<<arr.at(3);

  //other functions 
 //begin() end() swap() max_size() fill()

 




}