 
#include <iostream>
using namespace std;

int getSecondLargest(int arr[], int n)
{
   int result =-1;   //if elements  is not preset 
   int largest = 0;

   //transverse the array
   for(int i=1; i<n; i++)
   {
      //finding the largest element
      if(arr[i]>arr[largest]){
         result =largest;
         largest = i;
         //make largest as 2nd largest & index+ to largest
      }
      // condition with alll the elments leaving the largest
      else if (arr[result] != arr[i]){
         //this will help to find second largest elements which are present after the largest
         if(arr[i]>arr[result]){
            result =i;
         }
      }

   }

   return result;
}


//main function
int main(){

    //initialise array
    int arr[]={5,8,50,19,35};
   
   cout<<getSecondLargest(arr,5);
    return 0;
}