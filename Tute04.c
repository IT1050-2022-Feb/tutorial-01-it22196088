/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
#define minimum(a, b) (a<b) ? a : b
#define maximum(a, b) (a<b) ? b : a
#define multiply(a, b) a * b

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   (void) scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   (void) scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d\n", multiply(no1, no2));
   return 0;
}
