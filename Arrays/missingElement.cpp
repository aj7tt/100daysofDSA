/* 
  
Question 5:
You are given a list of n-1 integers and these integers are in the range of 1 to n. 
There are no duplicates in the list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer

*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    int total=(n+1)*(n+2)/2;  //total sum of number 

    for(int i=0;i<n;i++)
        total-=a[i];
    cout<<total<<endl;
    return 0;
}