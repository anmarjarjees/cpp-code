#include <iostream>
// working with conditions
int main()
{
    int avg = 85;
    /*
    The avg score is 50 or more, the student passes the course
    otherwise, the student will have retake the course.
    */
   if (avg >= 50)
   {
       std::cout << "Congratulations! You have passed the course.\n";
   }
   else
   {
       std::cout << "Unfortunately, you need to retake the course.\n";
   }

   // Example about even and odd numbers:
   // modulus operator % gives the remainder of a division operation
   int number = 7;
   if (number % 2 == 0)
   {
       std::cout << number << " is even.\n";
   }
   else
   {
       std::cout << number << " is odd.\n";
   }
 
   
    // Example about TPL:
    /* 
    if the person live on Toronto OR study in Toronto OR work in Toronto
    then the person can have TPL (Toronto Public Library) membership for free :-)
    */
    bool liveInToronto = true;
    bool studyInToronto = false;
    bool workInToronto = false;
    // Using logical OR operator (||)
    if (liveInToronto || studyInToronto || workInToronto)
    {
        std::cout << "You are eligible for a free TPL membership!\n";
    }
    else
    {
        std::cout << "You need to pay for TPL membership.\n";
    }

    // Another operator is logical AND operator (&&)
    // Example about scholarship eligibility:
    /*
    if the student has a GPA of 3.5 or higher AND
    has completed at least 30 credits, then the student is eligible for a scholarship.
    */
    double gpa = 3.7;
    int completedCredits = 32;
    if (gpa >= 3.5 && completedCredits >= 30)
    {
        std::cout << "You are eligible for a scholarship!\n";
    }   
    else
    {
        std::cout << "You are not eligible for a scholarship.\n";
    }   

    // Switch statement example:
    /* 
    Ask the user to enter two numbers and an operator (+, -, *, /)
    then perform the corresponding arithmetic operation and display the result.
    */

    // Declare variables (placholders) to hold user input:
    // notice we didn't initialize the variables here
    int num1, num2;
    // Declare a variable to hold the operator
    char op; // char is used to hold a single character 'x', '+', '-', '/'
    // Ask/prompt the user to enter two numbers and an operator
    std::cout << "Enter your first number: ";
    // getting user input and storing it in num1
    std::cin >> num1; // std::cin is used to get input from the user

    std::cout << "Enter your second number: ";
    // getting user input and storing it in num2
    std::cin >> num2; // std::cin is used to get input from the user

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;   // getting user input and storing it in op

  
    // Using switch statement to perform the operation based on the operator:
    switch (op)
    {
        case '+':
            std::cout << "Result: " << num1 + num2 << "\n";
            break; // break is used to exit the switch statement
            // without break, the program will continue to execute the next cases
        case '-':
            std::cout << "Result: " << num1 - num2 << "\n";
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << "\n";
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
            {
                std::cout << "Result: " << num1 / num2 << "\n";
            }
            else
            {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operator. Please use +, -, *, or /.\n";
            break;
    }       
    return 0;

}