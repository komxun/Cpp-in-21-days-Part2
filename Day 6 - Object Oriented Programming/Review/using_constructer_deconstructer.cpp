// Listing 6.4 - Using constructors, destructors
#include <iostream>
class Cat
{
    public:
        Cat(int initialAge);  // custom constructer
        ~Cat();               // destructer
        int GetAge() const;         // accessor function
        void SetAge(int age);
        void Meow() const;

    private:
        int itsAge;
};

Cat::Cat(int initialAge)
{
    itsAge = initialAge;
}

Cat::~Cat(){}

int Cat::GetAge() const
{
    return itsAge;
}

void Cat::SetAge(int age)
{
    itsAge = age;
}

void Cat::Meow() const
{
    std::cout << "Meowwww~~\n";
}

int main()
{
    Cat Shiro(12);
    Shiro.Meow();
    std::cout << "Shiro is " << Shiro.GetAge() << " years old.\n";
    std::cout << "2 years have passed\n";
    Shiro.SetAge(16);
    std::cout << "Shiro is now " << Shiro.GetAge() << " years old.\n";
    Shiro.Meow();
    return 0;
}