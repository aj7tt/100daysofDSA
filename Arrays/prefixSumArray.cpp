/**********************
@Question 6:
Given an array arr[] of size n,write program to find its prefix sum array

**************************/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int prefix[n];
    prefix[0]=a[0];
    
    // Adding present element with previous element
    for (int i=1;i<n;i++)
        prefix[i]=prefix[i-1]+a[i];
    for(int i=0;i<n;i++)
        cout<<prefix[i];
    return 0;
}