
#include <iostream>
using namespace std;

int greaterThanX(int arr[],int n,int x)
{
    // your code here
    int count =0;
    
    for(int i=0; i<n; i++){
        if(x<arr[i]){
            count++;
        }
    }
    return count;
}

int main(){

    int arr[]={2,4,5,6,7,6};

     
    cout<<greaterThanX(arr,5,4);

}