/*This program calculates the first 40 numbers in the Fibonacci sequence and prints them out.
 * The Fibonacci sequence is a sequence of numbers in which each number is the sum of the two preceding ones,
 * usually starting with 0 and 1.
 * The program starts by initializing an array called "fib_array" with the first two numbers in the Fibonacci sequence,
 * 1 and 1. It then uses a while loop to repeatedly add the last two numbers in the array together to get the next number
 * in the sequence and storing it in the next position in the array.
 * This loop continues until 40 numbers have been added to the array.
 * Another while loop then used to iterate through the array and print out each number, one per line.*/

#include <stdio.h>

int main (void)
{
  int fib_array[40] = {1, 1};
  int i = 0;
  int index = 0;
  int current_num;
  while (i < 40)
    {

      fib_array[i + 2] = fib_array[i] + fib_array[i + 1];

      i++;
      if (i + 2 == 40)
        {
          while (index < 40)
            {
              printf ("%d\n", fib_array[index]);
              index++;
            }
        }
    }

}
