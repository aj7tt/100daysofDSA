#include <iostream>
using namespace std;

//insertion in hash table using linear probing 

int LinearProbing(int array, int size, int value){
    //find the key using data % size
    int key = value % size;
    int index = key;

    // check if hash table is empty table[key]=-1; 
    while (array[index] != -1){

    }

    // insert the data 
    
    //if there is collisons occurs index++ 


    //if empty insert data


    //if we reach to starting point while transvering that means no space is available


}

int main(){

    //declare initialise the hash table using array with -1

    int size = 5;
    int array[]={-1,-1,-1,-1,-1};

    int value = 5;

    LinearProbing();

}