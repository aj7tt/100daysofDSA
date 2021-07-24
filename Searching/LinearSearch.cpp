#include <iostream>
using namespace std;

int LinearSearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int array[] = {86, 25, 40, 56, 20, 14, 10, 2};

    int n = 7;
    int key = 56;

    if (LinearSearch(array, n, key) == 1)
    {
        cout << "key found";
    }
    else
    {
        cout << "Key not found";
    }
    return 0;
}