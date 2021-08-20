/**********************
 
 */
  

2. modify the original arguments by passing references   

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vect{ 10, 20, 30, 40 };

	// We can modify elements if we
	// use reference
	for (int &x : vect)
		x = x + 5;

	// Printing elements
	for (int x : vect)
	cout << x << " ";

	return 0;
}


//3. avoid coping the large objects using functions call 
 