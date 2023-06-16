// Listing 7.4 - break and continues (P.181)

/*The user is invited to enter a small number and a large number, 
a skip number, and a target number. The small number will be 
incremented by 1, and the large number will be decremented by 2. 
The decrement will be skipped each time the small number is a 
multiple of the skip. The game ends if small becomes larger than
large. If the large number reaches the target exactly, a statement 
is printed and the game stops.*/

#include <iostream>
int main()
{
    using namespace std;

    unsigned short small;
    unsigned long large;
    unsigned long skip;
    unsigned long target;
    const unsigned short maxSmall = 65535;

    cout << "Enter a small number: ";
    cin >> small;
    cout << "Enter a large number: ";
    cin >> large;
    cout << "Enter a skip number: ";
    cin >> skip;
    cout << "Enter a target number: ";
    cin >> target;
    cout << endl;

    // set up 2  stop conditions for the loop
    while (small < large && small < maxSmall)
    {
        small++;
        if (small % skip == 0) // skip condition
        {
            cout << "Skipping on " << small << endl;
            continue;
        }
        if (large == target)
        {
            cout << "Target reached--You win!!" << endl;
            break;
        }

        large -= 2;

    }
    cout << "\nSmall: " << small << " Large: " << large << endl;
    return 0;
}