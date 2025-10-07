#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime>   // for std::time()
// working with while loops
int main()
{
    /*
    Print numbers from 1 to 10 without using loops:
    printing 1 to 10 using multiple std::cout statements is not efficient:
    \n is used to create a new line
    */
    std::cout << "1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n";

    // Using while loop to print numbers from 1 to 10:

    // while loop syntax:
    // while (condition)
    // {
    //     // code to be executed as long as the condition is true
    // }
    int i = 1; // initialization the loop control variable "i" to 1
    while (i <= 10)
    {                           // condition: loop will continue as long as i is less than or equal to 10
        std::cout << i << "\n"; // print the current value of i
        i++;                    // increment i by 1
    }

    // using the do-while loop to print numbers from 1 to 10:
    int j = 1; // initialization the loop control variable "j" to 1
    do
    {                           // do block will execute at                least once
        std::cout << j << "\n"; // print the current value of j
        j++;                    // increment j by 1
    } while (j <= 10); // condition: loop will continue as long as j is less than or equal to 10

    // Game => Guess the number: 1 to 10
    // hard coding the secret number to be guessed
    // int secretNumber = 7; // the number to be guessed
    /*
    Generating a random number between 1 and 10
    1. include the <cstdlib> and <ctime> libraries
    2. use std::srand(std::time(0)); to seed the random number generator
    3. use std::rand() % 10 + 1 to generate a random number between 1 and 10
    */
    std::srand(std::time(0)); // seed the random number generator with the
                              // current time to ensure different random numbers each run
    int secretNumber = std::rand() % 10 + 1; // generate a random number between 1 and 10
    std::cout << "Welcome to the Guess the Number game!\n";
    int guessCount = 0;       // variable to count the number of guesses
    int guessedNumber;        // variable to hold the user's guess
    // keep asking the user to guess the number until they guess correctly
    // in other words, keep looping until the guessed number is equal to the secret number
    while (guessedNumber != secretNumber)
    {
        std::cout << "Enter your guess: " << std::flush; // flush ensures prompt appears immediately
        std::cin >> guessedNumber;                       // read user input
    }

    return 0;
}
