// Listing 7.3 - complex while loop (P.179)
/*Game - enter 2 number: small and large. 
The larger one will count down by 2, and the smaller one
will count up by 1. The goal is to guess when they'll meet*/
#include <iostream>

int main()
{
    using namespace std;
    unsigned short smallNum;
    unsigned long largeNum;
    const unsigned short maxSmall = 65535;

    cout << "Enter a small number: ";
    cin >> smallNum;
    cout << "Enter a large number: ";
    cin >> largeNum;

    cout << "Small: " << smallNum << "...";

    // test 2 conditions for each iteration
    while (smallNum < largeNum && smallNum < maxSmall)
    {
        if (smallNum % 5000 == 0) // write a dot every 5k lines
            cout << ".";
        smallNum++;
        largeNum -= 2;
    }
    cout << "\nSmall: " << smallNum << "\tLarge: " << largeNum << endl;
    return 0;
}