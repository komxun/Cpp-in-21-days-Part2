// Listing 6.2 - A class with Acessor Methods (P.147)

/* Cat class declaration
All data members are private except public accessor function
which set and/or get the value of private data */

class Cat
{
    public:
        // public accessors
        unsigned int GetAge();  
        void SetAge(unsigned int);

        unsigned int GetWeight();
        void SetWeight(unsigned int);

        // public member functions
        void Meow();

    private:
        // private member data
        unsigned int itsAge;
        unsigned int itsWeight;

};