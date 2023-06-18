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
# Inline implementation
- Method 1: you can make class methods inline
```cpp
inline int Cat::GetWeight()
{
    return itsWeight;
}
```
- Method 2: you can put the definition of a function into the declaration of the class
``` cpp
class Cat
{
    public:
        int GetWeight() const {return itsWeight;}  // inline
        void SetWeight() {int weight};
};
```
Example:
https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%206%20-%20Object%20Oriented%20Programming/Cat.hpp#L3-L15
https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%206%20-%20Object%20Oriented%20Programming/Cat.cpp#L4-L32

# Classes with Other Classes as Member Data
Example : A rectangle is composed of lines. A line is defined by two points. A point is defined by an x-coordinate and a y-coordinate

You first declare a Point class to hold the x- and y-coordinates of each point. 

https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%206%20-%20Object%20Oriented%20Programming/Rectangle.hpp#L4-L62
https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%206%20-%20Object%20Oriented%20Programming/Rectangle.cpp#L2-L47

# Structures
- In C++, a struct is the same as a class, except that its members are public by default
``` cpp
struct Cat
{
    public:
        int GetWeight() const {return itsWeight;}  // inline
        void SetWeight() {int weight};
};
```

# Loop with goto
- As a rule, programmers avoid goto because it can cause a jump to any location in your source code, backward or forward!

https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%207%20-%20Program%20Flow/loop_goto.cpp#L3-L17

# while Loops
- The while statement checks its condition before executing any of its statements, and if the condition evaluates false, the entire body of the while loop is skipped.
Simple example:
```cpp
// count to 10
int x = 0;
while (x<10)
{
    cout << "X: " << x++;
}
```
Complex while loops example:
https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%207%20-%20Program%20Flow/complex_while_loop.cpp#L5-L31

# continue and break
- The continue statement jumps back to the top  of the loop
- The break statement immediately exits the while loop
```cpp
while (small < large && small < MAXSMALL)
{
    small++;
    if (small % skip == 0)
    {
        cout << "skipping on " << small << endl;
        continue;
    }
    if (large == target)
    {
        cout << "Target reached!";
        break;
    }
    large -= 2;
}
```

# do..while Loops
- It is possible that the body of a while loop will never execute
- do...while loop executes the body of the loop before its condition is tested
- It ensures that the body always executes **at least one time**
``` cpp
// Example: count to 10
int x = 0;
do
    cout << "X: " << x++;
while (x<10)
```

https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%207%20-%20Program%20Flow/do_while_loop.cpp#L4-L21

# for Loops
- A for loop combines 3 steps into 1 statement: Initializing, Testing, and Incrementing\
for (_initialization_;   _test_;   _action_) { _statement_ } 
``` cpp
int counter
for (counter=0; counter<5; counter++)
    std::cout << "Looping! ";
    
std::cout << "\nCounter: " << counter << std::endl;
```

Multiple statements in for loops:
```cpp
#include <iostream>
int main()
{
    for (int i=0; j=0; i<3; i++, j++)
        std::cout << "i: " << i << "j: " << std::endl;
    return 0
}

// output:  i: 0 j: 0 --> i: 1 j: 1 -->i: 2 j: 2 
```

## Null Statements in for loops
- Using a null statement (;), you can create a for loop that acts exactly like a while loop by leaving our the first and third statements
https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%207%20-%20Program%20Flow/for_loop_null_statement.cpp#L3-L15

## forever Loop
- A forever loop is a loop that does not have an exit condition. To exit the loop, a break statement must be used.

https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%207%20-%20Program%20Flow/forever_loop.cpp#L3-L62


# Switch Statements
- Unlike if, which evaluates one value, switch statements allow you to branch on any of several values
- If no break statement is at the end of a case statement, execution falls through to the next case statement!!!
``` cpp
// General form of the switch statemnet
switch (expression)
{
    case valueOne: statement; 
                   break;
    case valueTwo: statement:
                   break;
    // . . .
    default: statement;
}
```

https://github.com/komxun/Cpp-in-21-days-Part2/blob/054330158373a9c7a61c588e9275936f31b3fe1a/Day%207%20-%20Program%20Flow/switch_case.cpp#L3-L29


