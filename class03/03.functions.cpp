// the topic of next week in class midterm assignment: "3"
#include <iostream>

/*
Function Basics:
****************
Our custom functions will be defined here
- It must be declared before it is used
- It must be created outside of main()
- It can be called from main() or other functions
*/

// Function Declaration (Prototype)
// if function does not return any value, use "void"
// if function does not take any parameters, use empty parentheses
void printWelcomeMessage()
{
    std::cout << "Welcome to our first function!" << std::endl;
}; // function prototype

/*
Task : a function to convet LB to KG:
for an approximate result, divide the mass value by 2.205
*/
// IMPORTNAT NOTE: void => this function CANNOT return any value
double convertLBtoKG(double massInLB)
{
    // function body:
    double massInKG = massInLB / 2.205;
    return massInKG;
    // std::cout << massInLB << " LB is approximately " << massInKG << " KG." << std::endl;
}
/*
main() => a function :-)
main() is the entry point of a C++ program
It returns an integer value to the operating system upon completion
A return value of 0 typically indicates that the program ended successfully
*/
int main()
{
    std::cout << "Hello, World!" << std::endl;
    // Function Call > calling the function to execute its code:
    printWelcomeMessage();
    double massInKG = convertLBtoKG(67);
    std::cout << "67 LB is approximately " << massInKG << " KG." << std::endl;
    return 0; // always the last statement in main()
}