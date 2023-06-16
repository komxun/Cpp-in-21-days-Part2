// Listing 6.2: A class with Accessor method
class Cat
{
    public:
        unsigned int GetAge();
        void setAge(int age);

        unsigned int GetWeight();
        void setWeight(int weight);

        void Meow();
    private:
        unsigned int itsAge;
        unsigned int itsWeight;     
};
