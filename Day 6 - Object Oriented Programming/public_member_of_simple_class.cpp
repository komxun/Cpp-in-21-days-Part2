// Listing 6.1 - Accessing the Public members of a Simple Class
// Demonstrates declaration of a class and 
// definition of an object of the class (P.145)
#include <iostream>

class Cat       // declare the Cat class
{
    public:             // members that follow are public
        int itsAge;     // member variable
        int itsWeight;  // member variable
};  // don't forget the semicolon

int main()
{
    Cat Frisky;
    Frisky.itsAge = 5;  // assign to the member variable
    std::cout << "\n\nFrisky is a cat who is ";
    std::cout << Frisky.itsAge << " years old.\n\n";
    return 0;
}
