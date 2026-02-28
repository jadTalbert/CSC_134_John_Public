/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: This is my fist attempt at using arrays in C++
*/


#include <iostream>
using namespace std;

int main(){

     const int NUM_OF_ELEMENTS = 5; // This is a constant variable that holds the number of elements in the array
     int myArray[NUM_OF_ELEMENTS]; // This is an array of integers that can hold 5 elements

     myArray[0] = 100;
     myArray[1] = 200;
     myArray[2] = 300;
     myArray[3] = 400;
     myArray[4] = 500;

     cout << "The first index of the array is: " << myArray[0] << endl;
     cout << "The fourth index of the array is: " << myArray[4] << endl;


     return 0;
     
}

