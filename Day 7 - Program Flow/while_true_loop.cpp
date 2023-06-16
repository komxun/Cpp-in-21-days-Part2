// Listing 7.5 - while(true) loop (P.183)
#include <iostream>
int main()
{
    int counter = 0;
    while(true)
    {
        counter++;
        std::cout << "counter = " << counter << std::endl;
        if (counter > 10)
            break;
    }

    std::cout << "Final counter: " << counter << std::endl;
    return 0;
}