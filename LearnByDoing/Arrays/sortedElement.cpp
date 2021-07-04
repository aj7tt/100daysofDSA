//sorting in array

#include <iostream>
using namespace std;


int sortedElement(int arr[], int n){
    for(int i = 0; i <n;i++){
        bool found = true;
        if(arr[i]<arr[i-1]){
            found = false;
            break;
        }
    if(found==true)
        return true;
    }
}

int getSortedArray(int arr[], int n)
{
    //check if element are sorted in array
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])
            return 0;
    }
    return 1;
}

 

int main(){

    int arr[]={5,6,7,8,6};

    //call function
    cout<<getSortedArray(arr,4)<<endl;
    cout<<sortedElement(arr,4);

    return 0;

}