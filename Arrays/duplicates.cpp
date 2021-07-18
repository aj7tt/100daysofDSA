#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    //one element must be present in the array
    int res=1;
    //transverse the array
    for(int i=1; i<n; i++){
        //codition to check for duplicates
        if(arr[res-1] != arr[i]){
            arr[res]=arr[i];       
            res++;
        }        
    } 
    return (n-res);     //no of unique elements in the array
}


//main function
int main(){

    //initialise array
    int arr[]={5,8,50,50,35};
   
   cout<<removeDuplicates(arr,5);

   
    return 0;
}