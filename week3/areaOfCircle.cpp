/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: calculate the area of a circle given the radius
*/

//include the directives we need for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //equation: A = pi * r * r

    float area;
    float pi = 3.1415;
    float radius = 19;

    area = pi * radius * radius;
    cout << "The area of the circle is: " << area <<  " square feet" << endl; 
}