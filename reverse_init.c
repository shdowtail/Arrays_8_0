/* The program begins by defining a constant N with the value 10.
 * This will be used to set the size of the array 'a' which will store the user input.
 * The program then prints a prompt asking the user to enter 10 numbers.
 * The program then enters a for loop which will iterate 10 times, once for each number that needs to be entered.
 * Inside the loop, the program scans the user input into the array 'a' at the current index (i).
 * Once the loop has finished, the program prints a message saying "In reverse order:"
 * and then another for loop is used to iterate backwards through the array 'a'
 * starting from the last index (N-1) and ending at 0. For each iteration,
 * the program prints the value stored in the current index of the array.
 * Once the loop has finished, the program ends.*/

#include <stdio.h>

#define N 10

int main (void)
{
  int a[N], i;
  printf ("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    {
      scanf ("%d", &a[i]);
    }

  printf ("In reverse order: ");
  for (i = N - 1; i >= 0; i--)
    {
      printf (" %d", a[i]);
      printf ("\n");

    }
  return 0;
}
