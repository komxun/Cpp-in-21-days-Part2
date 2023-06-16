// Listing 6.6 - Header file: Class declaration (P.163)

#include <iostream>
class Cat
{
    public:
        Cat (int initialAge);   // Custom constructer
        ~Cat();                 // Custom destructer
        int GetAge() const {return itsAge;}    // inline Accessor function
        void SetAge(int age) {itsAge = age;}   // inline Accessor function
        void Meow() const {std::cout << "Meow~\n";} // inline 

    private:
        int itsAge;             // member variable
};