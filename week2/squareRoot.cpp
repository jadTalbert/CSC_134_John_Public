/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: take the square of a real number and print the result
*/

//include the required directives/libraries for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declare the variables for this program
    double num, result;

    //ask the user for a number and store it in the variable num
    cout << "Enter a real number: ";
    cin >> num;

    //calculate the square root of the number and store it in the variable result
    result = sqrt(num);

    //print the result to the user
    cout << "The square root of " << num << " is " << result << endl;

    return 0; 
}