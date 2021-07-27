
#include <iostream>
using namespace std;

//naive method
int countTotal(int arr[], int key, int n) {
    //
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}

//using resursion 
int countTotalRecursive(int arr[], int key, int n) {

    //base case 
    if( n<0) 
        return -1;

    // return statement 
    int count = 0;
    if (arr[n] == key)
        count++;

    //recruisve call 
     return countTotal( arr, key, n-1);
     return count;
}



void findFirstAndLast(int arr[], int n, int key)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if ( key != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout << (last - first)+1;
	else
		cout << "Element Not Found";
}

// using binary search 

/*
Can be solved similiar to above solution 
First find the first occurrence of key n last occurnce 
simply count the elememnts between 1st n last occurence +1 

*/



// Driver code here
int main() {
    // 
    int arr[] = {0, 0, 0,1,1,1,1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int key = 1;
    cout<<countTotal(arr,key, n)<<endl;

    cout<<countTotalRecursive(arr, key, n)<<endl;

    findFirstAndLast(arr, n, key);
 
    return 0;
}
