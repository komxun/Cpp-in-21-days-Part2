// Listing 6.4 - Using Constructors and Destructors

#include <iostream>

class Cat
{
    public:
        Cat(int initialAge);    // custom constructor
        ~Cat();                 // custom destructor (same as default)
        int GetAge();           // accessor function
        void SetAge(int);       // accessor function
        void Meow();

    private:
        int itsAge;             // member variable
};

// Definition of our custom Constructor 
Cat::Cat(int initialAge)
{
    itsAge = initialAge;    // input parameter = itsAge
}

// Definition of our custom Destructor (Never take parameters)
Cat::~Cat()                 
{
    // takes no action
}

// Definition of accessor function
int Cat::GetAge()
{
    return itsAge;
}

void Cat::SetAge(int Age)
{
    itsAge = Age;
}

void Cat::Meow()
{
    std::cout << "Meoww~\n";
}

// -----------------------Main Program----------------------
int main()
{
    Cat Frisky(5);      // itialize Frisky's age by our custom Constructor
    Frisky.Meow();
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    
    Frisky.Meow();
    Frisky.SetAge(12);
    std::cout << "Frisky is now ";
    std::cout << Frisky.GetAge() << " years old.\n";

    return 0;
}
