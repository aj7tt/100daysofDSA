/* Question 1:
Given an array, write program to find the minimum and maximum elements in it
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;       // number of elements int array we want 

    int a[n];     //  declare an array 

    //take input from user and store in an array 
    for(int i=0;i<n;i++)
        cin>>a[i];

    //  initialise min, max   
    int min=a[0], max=a[0];


    //finding minimum element in an array 
    for(int i=1;i<n;i++)        // this traverse through an array
    {
        if(min>a[i])            // it compares the elements in the array a[0] > a[i]
            min=a[i];           // if we find the minimum element than min , initialise that value to min
    }
    
    // finding maximum element in an array 
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    //print the output
    cout<<min<<endl;
    cout<<max<<endl;
    return 0;
    
}