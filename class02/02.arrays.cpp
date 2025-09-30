#include <iostream>
// working with arrays
int main()
{
    // Thinking :-) about having multiple variables to store similar data:
    int age1 = 25;
    int age2 = 30;
    int age3 = 22;
    int age4 = 28;
    int age5 = 35;
    // Declare and initialize an array of integers
    // creating an array to hold 5 different ages:

    // Declaration: array named "ages" that can hold 5 integers:
    // By convention, array names are plural
    int ages[5];

    // Initialization: assigning values to the array elements
    ages[0] = 25;
    ages[1] = 30;
    ages[2] = 22;
    ages[3] = 28;
    ages[4] = 35;

    /*
    like otehr programming languages, arrays in C++ are zero-indexed,
    meaning the first element is at index 0, the second at index 1, and so on.
    Also we can declare and initialize an array in a single line:
    */
    double prices[4] = {19.99, 29.99, 9.99, 14.99};
    double averages[] = {85.5, 90.0, 78.5, 88.6}; // Compiler infers size as 4
    char grades[] = {'A', 'B', 'C', 'D', 'F'};    // Compiler infers size as 5
    char letters[] = {'X', 'Y', 'Z', 'W'};        // Compiler infers size as 4
    bool flags[2] = {true, false};

    // 1. Multiple std::cout calls (clearer for beginners)
    /*
    notice that we used \n to add a new line after each output for better readability.
    which is equivalent to std::endl but without flushing the output buffer.
    */
    std::cout << "Average of index 0: " << averages[0] << "\n";
    std::cout << "Average of index 1: " << averages[1] << "\n";
    std::cout << "Average of index 2: " << averages[2] << "\n";
    std::cout << "Average of index 3: " << averages[3] << "\n";

    // Creating an array to hold 3 different student names:
    std::string studentNames[3] = {"Alice", "Bob", "Charlie"};
    return 0;
}