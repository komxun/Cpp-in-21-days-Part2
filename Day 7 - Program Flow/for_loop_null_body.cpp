// Listing 7.13 - null statement in For loop (P.193)

#include <iostream>
int main()
{
    for (int i=0; i<5; std::cout << "i = " << i++ << std::endl)
    ;
    return 0;
}