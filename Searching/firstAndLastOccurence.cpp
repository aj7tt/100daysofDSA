// C++ program to find first and last occurrence of
// an elements in given sorted array
#include <bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence
// of an elements
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
		cout << "First Occurrence : " << first
			<< "\nLast Occurrence : " << last;
	else
		cout << "Element Not Found";
}


// 
int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);
	int key = 8;
	findFirstAndLast(arr, n, key);
	return 0;
}


// taken from GFG
