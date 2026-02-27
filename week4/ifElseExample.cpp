/*
@author: Jad Talbert
@date: 02/27/2026
@purpose: Example of if-else statements in C++ 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   const int HIGH_SCORE = 95; // Constant for high score threshold
   int score1, score2, score3;// Variables to hold test scores
   double average;// Variable to hold average score

   cout << "Enter three test scores: ";// Prompt user for input
   cin >> score1 >> score2 >> score3;// Read three test scores from user
    average = (score1 + score2 + score3) / 3.0;// Calculate average score
    cout << fixed << setprecision(2);// Set output to show two decimal places
    cout << "Average score: " << average << endl;//


    if (average >= HIGH_SCORE) {// Check if average score is greater than or equal to high score threshold
        cout << "Congratulations! You have a high score!\n" << endl;// Output message if average score is a high score
    }
    else{
        cout << "Keep trying! You can improve your score.\n" << endl;// Output message if average score is not a high score
    }

    return 0;// Return 0 to indicate successful program termination
}