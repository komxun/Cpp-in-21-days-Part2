// Listing 7.14 - nested For Loops (P.193)

#include <iostream>
int main()
{
    using namespace std;
    int row, col;
    char theChar;

    cout << "How many rows: ";
    cin >> row;
    cout << "How many columns: ";
    cin >> col;
    cout << "What is the character?: ";
    cin >> theChar;

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cout << theChar;
        }
        cout << endl;
    }
    return 0;
}