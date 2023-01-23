#include <stdio.h>
/*The program is prompting the user to enter a number. It then stores the number in a variable called n.
 * The program then uses a while loop to iterate through the digits of the number, starting from the rightmost digit.
 * For each digit, it checks if the digit is equal to 0, 1, 2, 3, 4, 5, 6, 7, 8 or 9,
 * and increments a flag for that particular digit if it is.
 * After the loop has finished, the program prints out how many times each digit was repeated.*/

int main (void)
{

  int flag_0 = 0, flag_1 = 0, flag_2 = 0, flag_3 = 0, flag_4 = 0
  , flag_5 = 0, flag_6 = 0, flag_7 = 0, flag_8 = 0, flag_9 = 0;
  int digit;
  long n;
  printf ("Enter a number: ");
  scanf ("%ld", &n);
  int i = 0;
  while (n > 0)
    {
      digit = n % 10;

      if (digit == 0)
        {
          i++;
          n /= 10;
          flag_0++;
        }
      if (digit == 1)
        {
          i++;
          n /= 10;
          flag_1++;
        }
      if (digit == 2)
        {
          i++;
          n /= 10;
          flag_2++;
        }
      if (digit == 3)
        {
          i++;
          n /= 10;
          flag_3++;
        }
      if (digit == 4)
        {
          i++;
          n /= 10;
          flag_4++;
        }
      if (digit == 5)
        {
          i++;
          n /= 10;
          flag_5++;
        }
      if (digit == 6)
        {
          i++;
          n /= 10;
          flag_6++;
        }
      if (digit == 7)
        {
          i++;
          n /= 10;
          flag_7++;
        }
      if (digit == 8)
        {
          i++;
          n /= 10;
          flag_8++;
        }
      if (digit == 9)
        {
          i++;
          n /= 10;
          flag_9++;
        }

    }
  if (flag_0 > 1)
    {
      printf ("0 was repeated %d times\n", flag_0);

    }
  if (flag_1 > 1)
    {
      printf ("1 was repeated %d times\n", flag_1);
    }
  if (flag_2 > 1)
    {
      printf ("2 was repeated %d times\n", flag_2);
    }
  if (flag_3 > 1)
    {
      printf ("3 was repeated %d times\n", flag_3);
    }
  if (flag_4 > 1)
    {
      printf ("4 was repeated %d times\n", flag_4);
    }
  if (flag_5 > 1)
    {
      printf ("5 was repeated %d times\n", flag_5);
    }
  if (flag_6 > 1)
    {
      printf ("6 was repeated %d times\n", flag_6);
    }
  if (flag_7 > 1)
    {
      printf ("7 was repeated %d times\n", flag_7);
    }
  if (flag_8 > 8)
    {
      printf ("8 was repeated %d times\n", flag_8);
    }
  if (flag_9 > 9)
    {
      printf ("9 was repeated %d times\n", flag_9);
    }

  return 0;
}