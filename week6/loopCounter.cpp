/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: this program will count the number of times a loop executes and display the result to the user
*/

#include <iostream>
using namespace std;

int main(){
    int count = 0; // initialize counter variable

    for (int i = 0; i < 10; i++) { // loop that executes 10 times
        count++; // increment counter variable
        cout << "The loop executed " << count << " times." << endl; // display result to user
    }


    return 0;

}