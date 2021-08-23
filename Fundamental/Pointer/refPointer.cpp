#include <iostream>
using namespace std;

int main() {
	int i=10; //simple or ordinary variable.
	int *p=&i; //single pointer
	int **pt=&p; //double pointer
	int ***ptr=&pt; //triple pointer
	// All the above pointers differ in the value they store or point to.
	cout << "i=" << i << "\t" << "p=" << p << "\t"
		<< "pt=" << pt << "\t" << "ptr=" << ptr << "\n";
	int a=5; //simple or ordinary variable
	int &S=a;
	int &S0=S;
	int &S1=S0;
	cout << "a=" << a << "\t" << "S=" << S << "\t"
		<< "S0=" << S0 << "\t" << "S1=" << S1 << "\n";
	// All the above references do not differ in their values
	// as they all refer to the same variable.
}
