// Listing 7.1 - Looping with goto (P.176)
// not good -> AVOID goto!!
#include <iostream>

int main()
{
    using namespace std;
    int counter = 0;
    loop:
        counter ++;      // counter = counter + 1
        cout << "counter = " << counter << endl;
        if (counter < 5)
            goto loop;   // jump to the top

        cout << "Complete. Counter: " << counter << endl;
        return 0;
}