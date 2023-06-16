// Listing 7.7 - do...while loop (P.186)
// ensuring that the body always executes at least 1 time

#include <iostream>
int main()
{
    using namespace std;
    int counter;
    cout << "How many hellos? ";
    cin >> counter;
    do
    {
        /* code */
        cout << "Hello\n";
        counter--;
    } while (counter > 0);
    
    cout << "Counter is: " << counter << endl;
    return 0;
    
}