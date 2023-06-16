// Listing 7.8 - while Reexamined (P.188)

#include <iostream>

int main()
{
    int counter = 0;
    while(counter < 5)
    {
        counter++;
        std::cout << "Looping!\n";
    }

    std::cout << "Counter : " << counter << std::endl;
    return 0;
}