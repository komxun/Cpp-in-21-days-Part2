// Listing 7.9 - For loop (P.189)

#include <iostream>
int main()
{
    int counter;
    for (counter = 0; counter < 5; counter ++)      // for(initialization; test; action)
    {                                               // same as MATLAB: for counter = 0:1:4
        std::cout << "Looping #" << counter << std::endl;
    }                                                

    std::cout << "counter: " << counter << std::endl;
    return 0;
}