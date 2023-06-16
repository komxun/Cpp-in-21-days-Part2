// Listing 7.17 - Forever loop (P.202)

#include <iostream>
int menu();
void DoTaskOne();
void DoTaskMany(int);

using namespace std;

// Main Program
int main()
{
    bool exit = false;
    for (;;)
    {
        int choice = menu();
        switch (choice)
        {
            case(1): DoTaskOne();   break;
            case(2): DoTaskMany(2); break;
            case(3): DoTaskMany(3); break;
            case(4): continue;      break; // redundant
            case(5): exit = true;   break;
            default: 
                cout << "Please select again! " << endl;
                break;
        }

        if (exit == true)
            break;
    }
    return 0;
}

// Functions
int menu()
{
    int choice;

    cout << " **** MENU **** " << endl << endl;
    cout << "(1) Choice one."  << endl;
    cout << "(2) Choice two."  << endl;
    cout << "(3) Choice three."<< endl;
    cout << "(4) Redisplay meny." << endl;
    cout << "(5) Quit."   << endl << endl;
    cout << "Select: ";
    cin >> choice;
    return choice;
}

void DoTaskOne()
{
    cout << "\nTask One!\n\n";
}

void DoTaskMany(int which)
{
    if (which == 2)
        cout << "\nTask Two!\n\n";
    else
        cout << "\nTask Three!\n\n";
}