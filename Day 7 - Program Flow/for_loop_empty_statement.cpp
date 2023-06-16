// Listing 7.12 - empty For loop statement (P.192)

#include <iostream>
int main()
{
    int counter = 0;
    int max;
    std::cout << "How many hello? Ans: ";
    std::cin >> max;
    for ( ; ; )    // Forever loop - A For loop that doesn't end
    {                     
        if (counter < max)
        {
            std::cout << "Hello! #" << counter+1 << std::endl;
            counter ++;
        }
        else
            break;
    }
    return 0;
}