// Listing 7.10 - Multiple Statements in For loop (P.190)

#include <iostream>
int main()
{
    for (int i=0, j=0; i<3; i++, j++)
    {
        std::cout << "i = " << i << " j = " << j << std::endl;
    }
    return 0;
}