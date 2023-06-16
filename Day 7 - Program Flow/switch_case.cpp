// Listing 7.16 - switch statement (P.199)

#include <iostream>
int main()
{
    using namespace std;
    unsigned short int number;
    cout << "Enter a number between 1 and 5: ";
    cin >> number;
    switch (number)
    {
        case 0: cout << "Too small sorry!";
            break;
        case 1: cout << "Incredible!" << endl;
            break;
        case 2: cout << "Masterful!" << endl;
            break;
        case 3: cout << "Excellent!" <<endl; 
            break;
        case 4: cout << "Nice pick!" << endl;
            break;
        case 5: cout << "Good job!" << endl;
            break;
        default: cout << "Too large!" << endl;
            break;
    }
    cout << endl << endl;
    return 0;
}