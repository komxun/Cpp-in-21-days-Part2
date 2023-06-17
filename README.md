# Cpp-in-21-days-Part2
My note for learning C++ in 21 days (Day 6 - 10)

# Object-Oriented Programming
In C++, the programmer can extend the language by creating any type needed, 
and each of these new types can have all the functionality and power of the built-in types.

## Downsides of creating types with struct
- Anything in the struct can be changed at any time by any piece of program logic
- There is not way to protect struct data from interference
- The built-in operators don't work on structs - it doesn't work to add 2 structs with a plus sign (+)

# Classes and Members
- A class is just a collection of variables -often of different types- combined with a set of related functions
- Ex. a car is a collection of wheels, doors, seat, windows, etc, and it can move, speed up, slow down, etc.
- A class enables you to bundle these various parts and functions into one collection - object
A class can consist of any combination of
1. Member variables (aka data members)
2. Member functions (aka method)

## Declaring a Class
```cpp
class Cat
{
    unsigned int itsAge;
    unsigned int itsWeight;
    void Meow();
};
```
Declaring this class doen't allocate memory for a Cat. It just tells the compiler what a Cat is and what it can do.

## Defining an Object
After you declare a class, you can then use it as a new type ot declare a variables of that type.
```cpp
unsigned int GrossWeight;  // define an unsigned integer
Cat Frisky;                // define a Cat
```
## Classes VS Objects
- Frisky is an object of type Cat, in the same way that GrossWeight is a variable of type unsigned int
- An object is an individual instance of a class

# Accessing Class Members
To access the member variables/functions of the object, use the dot operator (.)
```cpp
Frisky.itsWeight = 50;
Frisky.Meow();
```
## Assigning to Objects, Not to Classes
```cpp
int = 5;   // wrong !!

int x;
x = 5; // correct

Cat.itsAge = 5; // wrong !!

Cat Frisky;        // just like int x;
Frisky.itsAge = 5; // just like x = 5;
```
**If you don't declare it, your class won't have it !**
```cpp
Cat Frisky;
Frisky.Bark();    // Error: Member function Bark not found in class Cat !!!
```

# Private VS Public Access
**Private members** - can be accessed only within methods of the class itself
**Public members** - can be accessed through any object of the class



- All members of a class are private by default

```cpp
class Cat
{
  unsigned int itsAge;
  unsigned int itsWeight;
  void Meow();
};

int main()
{
  Cat Boots;
  Boots.itsAge = 5;  // error! can't access private data!
}
```
Q: Why can't Boots access his own age? \
A: Boots can, but you can't! \
Boots, in his own methods, can access all his parts-public and private

## Accessing Private Data
- To access private data in a class, you must create public functions, known as "accessor methods"
- A public accessor method is a class member function used to read/set the value of a private member variables
- Accessor functions enable you to separate the details of how the data is _stored_ from how it is _used_. This makes your program easier to maintain

https://github.com/komxun/Cpp-in-21-days-Part2/blob/a5b15b02106112ed8d2513422e915cf286a8ecc0/Day%206%20-%20Object%20Oriented%20Programming/class_example.cpp#L4-L43

- class methods definition includes the class name followed by two colons (::) and the function name.\
```cpp
void Cat::SetAge(int Age) 
 { 
     itsAge = Age;       // set member variabl e itsAge  
 }                       // to value passed in by Age 
 ```

# Constructors and Destructors
- Constructors create and initialize objects of your class
- Destructors clean up after the object and free any resources or memory that you might have allocated
- The constructor can take parameters as needed, but it cannot have a return value - not even void
- A destructor always has the name of the class, preceded by a tilde (~).
- Destructors take no arguments and have no return value.

## Using the Default Constructor
- All objects must be "constructed" and "destructed"

```cpp
Cat Rags;   // Rags gets no parameter
            // You must have a constructor in the form Cat(); (this is a Default constructor)
Cat Frisky (5,7);  // You must have a custom constructor taking two parameters
```

- It is always recommended that you define a custom constructor, and set the member variables to appropriate defaults to ensure that the object will always behave correctly!
- You must include the definition of the constructor and destructor (A standard destructor takes no action in the definition)

https://github.com/komxun/Cpp-in-21-days-Part2/blob/5ba45606b3fd1c020cbe0da1b146112895e1120c/Day%206%20-%20Object%20Oriented%20Programming/Constructors_Destructors.cpp#L1-L60

# Including const Member Functions
- You can also declare a class method (function) to be const - you are promising that the function won't change the value of any of the variables of the class
- It as good programming practice to declare as many methods to be const as possible

```cpp
int GetAge() const;   // this function is read-only, so it should be declared const
void SetAge(int age); // this can't be const as it changes the member variable itsAge
```

# Using a Header File
- For good programming practice, the declaration should be put into the header file (.h, .hp, or .hpp)
- Most of the time, clients of your class don't care about the implementation specifics
- After declaration in a header file, you must attach the header file to the .cpp file as follow:
```cpp
#include "Cat.hpp"
```

