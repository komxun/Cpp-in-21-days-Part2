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

