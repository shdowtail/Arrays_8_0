#include <stdbool.h>
#include <stdio.h>

int main (void)
{
  bool digit_seen[10] = {false};
  int digit;
  long num;
  printf ("enter a number: ");
  scanf ("%ld", &num);
  while (num > 0)
    {
      digit = num % 10;
      if (digit_seen[digit])
        {
          break;
        }
      digit_seen[digit] = true;
      num /= 10;
    }
  if (num > 0)
    {
      printf ("Repeated digits\n");
    }
  else
  {
      printf ("No repeated digits");
  }
  return 0;


}
