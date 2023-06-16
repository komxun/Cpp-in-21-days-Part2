// Listing 7.11 - Null statements in for loop (P.191)

#include <iostream>
int main()
{
    int counter = 0;
    for ( ; counter<5; )    // Act exactly like a while loop
    {
        counter ++;
        std::cout << "Looping #" << counter << std::endl;
    }
    
    std::cout << "counter: " << counter << std::endl;
    return 0;
}