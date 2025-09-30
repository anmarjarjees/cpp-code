#include <iostream>

int main() {
    // Integer types:
    int a = 10;               // 4 bytes
    long b = 100000L;        // 8 bytes
    short c = 30000;         // 2 bytes
    unsigned int d = 20U;    // 4 bytes
    // We will focus on using "int" for integer types in this course.
    int year = 2025;

    // Floating-point types
    float e = 5.5f;          // 4 bytes
    double f = 19.99;        // 8 bytes
    long double g = 3.14159L; // 16 bytes
    // We will focus on using "double" for floating-point types in this course.
    double price = 99.99;
    price = 79.99; // Update price
    // price ="book"; // This is incorrect, as price is a double.

    // Character type
    char h = 'A';            // 1 byte
    // Note: Using double quotes for a single character is incorrect in C++.
    // char test = "B";

    // Boolean type
    bool i = true;           // 1 byte

    // using "auto" keyword
    auto maxGrade = 100;            // Compiler infers 'j' as int
    auto averageScore = 99.99;          // Compiler infers 'k' as double
    auto initial = 'C';           // Compiler infers 'l' as char
    auto isPassed = false;         // Compiler infers 'm' as bool

    std::cout << "Year: " << year << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Character: " << h << std::endl;
    std::cout << "Boolean: " << i << std::endl; 
    std::cout << "Max Grade: " << maxGrade << std::endl;
    std::cout << "Average Score: " << averageScore << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Is Passed: " << isPassed << std::endl;
   

    return 0;
}   