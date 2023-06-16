#include<iostream>
class Dog
{
    public:
        Dog(int initialAge){itsAge = initialAge;}
        ~Dog(){}
        int GetAge() const {return itsAge;}
        void SetAge(int age){itsAge = age;}
        void Bark() const {std::cout << "Woof woof!!\n";}
    private:
        int itsAge;
};