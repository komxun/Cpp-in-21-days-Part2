// Listing 6.7 - include the header file and using inline function 
// (P.164)

#include "Cat.hpp"

// Definition of custom constructer
Cat::Cat(int initialAge)
{
    itsAge = initialAge;
}

// Definition of custom destructer
Cat::~Cat()
{
    // no action
}

// ---------------------Main Program----------------------
int main()
{
    Cat Daeng(5);
    Daeng.Meow();
    std::cout << "Daeng is a cat who is ";
    std::cout << Daeng.GetAge() << " years old.\n";
    
    Daeng.Meow();
    Daeng.SetAge(10);
    std::cout << "Now Daeng is ";
    std::cout << Daeng.GetAge() << " years old.\n";

    return 0;
}