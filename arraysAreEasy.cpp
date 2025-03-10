// February 22, 2025

/* Instructions: 
1.) create an array arr of integers with 5 elements
2.) write a program that prints the address of each element in the array using pointer arithmetic
3.) increment a pointer to traverse the array and print each value */

// Due: February 23 (Sunday)
#include <iostream>
using namespace std;

int main() {

    int arr[2][2][2] = { // this integer multidimensional array has three indices (integer array)
        {
            {2, 4}, {6, 8}
        },
        {
            {10, 12}, {14, 16}
        }
    };
    // multidimensional array declaration: 

    arr [0][0][0] = 1;
    arr [0][0][1] = 2;
    arr [0][0][0] = 3;
    arr [0][1][0] = 4;

    cout << "The base address of my multidimensional array is " << &arr << ".\n\n"; // base address 

    // for loop that prints out memory addresses of each element in multidimensional array 
    // iterating through each element in multidimensional array; prints memory address using "&" operator
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                cout << "The memory address of element [" << i << "] [" << j << "] [" << k << "] is " << (&arr[i][j][k]) << ".\n";
            }
        }
    } // output: memory location of each element in hexadecimal format

    return 0;
}

// base address = starting address of array in memory 

// "i, j, k" are *indices*

// first index: for the 2D array (from 0 to size1 -1)
// second index: for the row (from 0 to size2 -1)
// third index: for the column (from 0 to size3 -1)

// elements in multidimensional(3D) array are accessed using their indices