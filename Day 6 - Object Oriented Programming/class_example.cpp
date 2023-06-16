// Listing 6.3 - implementing methods of a simple class
// (P.150)

#include <iostream>
// ----------begin declaration of the class-------------
class Cat           
{
    public:                 // begin public section
        int GetAge();       // accessor function
        void SetAge(int);   // accessor function
        void Meow();        // general function

    private:
        int itsAge;         // member variable
};

// -------Definition of each accessor function-----------
int Cat::GetAge()
{
    return itsAge;
}

void Cat::SetAge(int Age)
{
    itsAge = Age;       // set member variabl e itsAge 
}                       // to value passed in by Age

void Cat::Meow()
{
    std::cout << "Meow~\n";
}

// --------------------MAIN PROGRAM----------------------
int main()
{
    Cat Frisky;
    Frisky.SetAge(5);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    return 0;
}