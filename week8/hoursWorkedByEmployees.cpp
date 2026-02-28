/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: This program shows how to calculate the hours worked by employees.
*/

#include <iostream>
using namespace std;

int main(){
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];//create an array to hold the hours worked by each employee

    //get the hours worked by each employee
    cout << "Enter the hours worked by each employee:";

    //capture the hours worked by each employee
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    cout << "The hours worked by each employee are:" << endl;
    //display the hours worked by each employee
    cout << "Employee 1: " << hours[0] << " hours" << endl;
    cout << "Employee 2: " << hours[1] << " hours" << endl;
    cout << "Employee 3: " << hours[2] << " hours   " << endl;
    cout << "Employee 4: " << hours[3] << " hours" << endl;
    cout << "Employee 5: " << hours[4] << " hours" << endl;
    cout << "Employee 6: " << hours[5] << " hours" << endl; 

    return 0;

}