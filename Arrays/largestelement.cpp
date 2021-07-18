

//find the largest element in the array

#include <iostream>
using namespace std;

int getLargestElement(int arr[], int n){

    //trasverse 
    for(int i=0; i<n; i++){
        bool flag=1;   //first element is largest

        //compare with all the elemnts of the array
        for(int j=0; j<n; j++){
            //compare if the initialise max_element is max 
            if(arr[j]>arr[i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            return arr[i];
        }
    }
    return -1;

}


int getSmallestElement(int arr[], int n){
    //initialise the first element to be min
    for(int i=0; i<n; i++){
        bool flag=1;

        //compare and check the smallest element
        for(int j=0; j<n; j++){
            if(arr[j]<arr[i]){
                flag=0;
                break;
            }
        }

        if(flag==1){
            return arr[i];
        }
    }
    return -1;
}


//efficient approach 

int getLargest(int arr[], int n){

    //take index 0 as largest element
    int large=0;
    //compare with other elements
    for(int i=0; i<n; i++){
        //if larege element is not greater
        if(arr[i]>arr[large]){
            large=i;                //update the large to i

        }
    }
    return arr[large];

}



//main function

int main(){

    //initialise array
    int arr[]={5,8,50,19,35};

    //cALL the function
    cout<<"The largest elelment in the array is: "<<getLargestElement(arr,4)<<endl;

    //call the fuction
    cout<<"The smallest element in the array is: "<<getSmallestElement(arr,4)<<endl;

    cout<<"The largest element in the array is: "<<getLargest(arr,4)<<endl;

    return 0;

}