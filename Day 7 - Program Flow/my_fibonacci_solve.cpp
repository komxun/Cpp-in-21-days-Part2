// Solving fibonacci

#include <iostream>
unsigned int fib(unsigned int);     // function prototype

int main()
{
    unsigned int pos;
    std::cout << "Position: ";
    std::cin >> pos;

    std::cout << "Answer = " << fib(pos);
    return 0; 

}

unsigned int fib(unsigned int position)
{
    unsigned int prev1, prev2, answer;

    for (int i=1; i <= position; i++)
    {
        if (i<3)
        {
            answer = 1;
        }
        else
        {          
            answer = prev1 + prev2;
        }
        prev2 = prev1; 
        prev1 = answer; 
        
    }
    return answer;
}