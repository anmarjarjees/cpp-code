#include <iostream>
// working with while loops
int main()
{
    /*
    Print numbers from 1 to 10 using a while loop
    */
   for (int i=1; i<=10; i++)
   {
       std::cout << i << "\n";
   }

   // print from 10 to 1:
   for (int i=10; i>=1; i--)
   {
       std::cout << i << "\n";
   }

   int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   for (int i = 0; i < 10; i++)
   {
       std::cout << numbers[i] << "\n";
   }
}