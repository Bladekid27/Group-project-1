// Roman Numerals
// Programmers: Ethan Brown, Joey Mei
// This program will convert inputted numbers from 1-10 into Roman Numerals

#include <iostream>
using namespace std;
// Add any other header files here

///////////////////////////////////////
int main()
{
    // Declaring Variables
    int(score) = 0;

        // Getting Input
        cout << "Please Enter a number between 1-10: ", cin >> score;

        // If Statements
        if (score == 1)
            cout << "Your Roman Numeral is: I" << endl;
            
        else if (score == 2)
            cout << "Your Roman Numeral is: II" << endl;

        else if (score == 3)
            cout << "Your Roman Numeral is: III" << endl;
            
        else if (score == 4) 
            cout << "Your Roman Numeral is: IV" << endl;
            
        else if (score == 5) 
            cout << "Your Roman Numeral is: V" << endl;
            
        else if (score == 6) 
            cout << "Your Roman Numeral is: VI" << endl;
            
        else if (score == 7) 
            cout << "Your Roman Numeral is: VII" << endl;
            
        else if (score == 8) 
            cout << "Your Roman Numeral is: VIII" << endl;
            
        else if (score == 9) 
            cout << "Your Roman Numeral is: IX" << endl;
            
        else if (score == 10) 
            cout << "Your Roman Numeral is: X" << endl;
            
        else 
            cout << "I don't know what you entered" << endl;

}

// Place any unused code here so that the instructor can follow your problem solving thoughts.
