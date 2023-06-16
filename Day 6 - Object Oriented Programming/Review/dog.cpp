#include <iostream>
#include "dog.hpp"

int main()
{
    Dog Yelly(11);
    Yelly.Bark();
    std::cout << "Yelly is a dog who is " << Yelly.GetAge() << " years old.\n";
    std::cout << "5 years have passed..\n";
    Yelly.SetAge(Yelly.GetAge() +5);
    std::cout << "Yelly is now " << Yelly.GetAge() << " years old.\n";
    Yelly.Bark();
    return 0;
}