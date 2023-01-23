/*
 * The program starts by declaring an array called digit_seen
 * which is used to store the number of times a given digit appears in the input.
 * The program then prompts the user for an input, and stores it in the num variable.
 * Next, a while loop is used to iterate over each digit in the input.
 * For each iteration, the digit is extracted from the input and stored in the digit variable.
 * If the digit has already been seen, the corresponding index in the digit_seen array is incremented.
 * Otherwise, the value at that index is set to 1.
 * Once all the digits have been processed, another while loop is used to iterate over the digit_seen array
 * and print out any digits that have been seen more than once.*/

#include <stdio.h>

int main (void)
{
  int digit_seen[10] = {0};
  int digit;
  int index = 0;
  int count = 0;
  long num;

  printf ("enter a number: ");
  scanf ("%ld", &num);
  while (num > 0)
    {
      digit = num % 10;
      if (digit_seen[digit])
        {
          digit_seen[digit]++;
        }
      digit_seen[digit]++;
      num /= 10;
      count++;
    }
  while (index < count)
    {
      if (digit_seen[index] > 1)
        {
          printf ("digit %d\trepeated %d times\n", index, digit_seen[index]);
        }
      index++;
    }

  return 0;

}
