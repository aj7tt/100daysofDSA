#include <iostream>
using namespace std;

int maxElement(int arr[], int n){
    int max =0;
    for(int i=1; i<n; i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    return arr[max];
}


int minElement(int arr[], int n){
    int min =0;
    for(int i=1; i<n; i++){
        if(arr[min]>arr[i]){
            min=i;
        }
    }
    return arr[min];
}



//main function
int main(){
 
    int arr[]={2,2,2,2};
    cout<<maxElement(arr,3)<<" ";
    cout<<minElement(arr,3);
    
    return 0;
}