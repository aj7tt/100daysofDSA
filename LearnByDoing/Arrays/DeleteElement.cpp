#include<iostream>
using namespace std;

void deleteFromArray(int arr[], int n, int index){
    
  //Your code here
    for(int i=0; i<n; i++)
    {
        if(index==i)
        {
            arr[index] =arr[i+1];
            index++;
            
        }
        
        arr[n]=0;
    }

}

int main()
{
     
    int arr[]={3,5,6,7,8};
 
    //call the function
    deleteFromArray(arr,5,3);

    for(int i=0;i<5;i++)
        cout<<arr[i];

    return 0;

}