/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: example of a while loop
*/

#include <iostream>
using namespace std;

int main(){
    int number = 0;//initialize number to 0

    //while number is less than 5, do the following
    while (number < 5){ 
        //print Hello
        cout<< "Hello\n"; 
        //increment number by 1
        number++;

    }
    
    //print That's all!
    cout<<"That's all!\n"; 
    //end of program
    return 0;

}