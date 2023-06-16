// Listing 6.5 - A demonstration of Violations of the Interface
// This program does not compile! (P.159)

#include <iostream>

class Cat
{
    public:
        Cat(int initialAge);    // Custom constructor
        ~Cat();                 // Custom destructor
        int GetAge() const;     // Accessor function
        void SetAge(int);       // Accessor function
        void Meow();
    private:
        int itsAge;             // member variable
};

// Definition of custom constructor
Cat::Cat(int initialAge)
{
    itsAge = initialAge;
    std::cout << "Cat Constructor\n";
}

// Definition of custom destructor
Cat::~Cat()
{
    // no action
    std::cout << "Cat Destructor\n";
}

// Definition of Accessor functions
int Cat::GetAge() const
{
    return (itsAge++);            // VIOLATE const !!!!
}

void Cat:: SetAge(int Age)
{
    itsAge = Age;
}

// Definition of member function
void Cat::Meow()
{
    std::cout << "Meow~\n"
}

//---------------------Main Program-------------------
int main()
{
    Cat Frisky;             // DOESN'T MATCH Constructor !!!
    Frisky.Meow();
    Frisky.Bark();          // NO Bark in member functions !!!
    Frisky.itsAge = 7;      // CAN'T ACCESS PRIVATE MEMBER !!!
    return 0;
}