// *ptr = prints value 
// ptr = stores value

#include <iostream>
using namespace std;
int main() {

    //declare and initialize array
	int arr[] = { 10, 34, 13, 76, 5, 46 };
    //declare an pointer
    int *ptr;

    //initialize pointer an arrays
	ptr = arr;

    //transverse the array
	for (int x = 0; x < 6; x++) {
        //print the elemnts in array
		cout << *ptr << endl;

		ptr++;
	}
	return 0;
}