// Listing 7.2 - while loop (P.177)
#include <iostream>

int main()
{
    using namespace std;
    int counter = 0;

    while (counter < 5)
    {
        counter++;
        cout << "counter = " << counter << endl;
    }

    cout << "Complete. counter = " << counter << endl;
    return 0;
}