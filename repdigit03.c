/*The program starts by initializing an array called digit_seen to all zeroes.
 * This array will be used to keep track of which digits have been seen in the input number.
 * Next, the program enters a loop that prompts the user for a number.
 * If the number is 0 or negative, the loop exits.
 * Otherwise, the program enters another loop that extracts each digit from the number
 * and checks if it has been seen before. If so, it increments the count for that digit in the digit_seen array
 * Finally, the program prints out the count for each digit that was seen more than once.*/

#include <stdio.h>

int main (void)
{
  int digit_seen[10] = {0};
  int digit;
  int index = 0;
  int count = 0;
  long num;

  for (;;)
    {

      printf ("enter a number: ");
      scanf ("%ld", &num);

      if (num == 0 || num < 0)
        {
          break;
        }
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
    }
  return 0;

}