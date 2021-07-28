#include <bits/stdc++.h> 

using namespace std;

int findSquareRoot(int a) {
    // Read
    int i =1; 
    while (i * i <= a){
        i++;
    }
    return i-1;
    
}

 

int main() {
	// Read the number of test cases.
	int T;
	cin>>T;
	while (T--) {
		// Read the input a, b
		int a;
		cin>> a;

        cout<<findSquareRoot(a);
	}

	return 0;
}
