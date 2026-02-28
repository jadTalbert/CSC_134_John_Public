/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: dynamically create array using for-loop
*/

#include <iostream>
using namespace std;

int main(){
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    
    for(int count=0; count < NUM_EMPLOYEES; count++){
        cout << "Enter hours worked by employee " << (count + 1) << ": ";
        cin >> hours[count];
    }

    cout << "The hours you entered are: " << endl;
    for(int count=0; count < NUM_EMPLOYEES; count++){
        cout << " " << hours[count] << endl;

    }

    return 0;
}