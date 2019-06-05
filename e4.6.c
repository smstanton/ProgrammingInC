/* Write a program to evaluate the polynomial shown here
   Note: This implementation will be "simplistic" and not
   make use of other packages as they have not been introduced
   yet in the text.
 */

#include <stdio.h>

int main (void)
{
  double   x = 2.55;

  printf ("The formula evaluates to: %f\n",
          (3 * ((x * x) * x)) - (5 * (x * x)) + 6);
}
