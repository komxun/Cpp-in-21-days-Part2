// Listing 7.6 - Skuipping the body of the while Loop
// (P.184)

#include <iostream>

int main()
{
    int counter;
    std::cout << "How many hellos?: ";
    std::cin >> counter;
    while (counter > 0)
    {
        std::cout << "Hello!\n";
        counter--;
    }
    std::cout << "Counter is OutPut: " << counter;
    return 0;
}