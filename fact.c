#include <stdio.h>

void  factorial() {
  int num, factorial = 1;

  // Get the input number from the user.
  printf("Enter a number: ");
  scanf("%d", &num);

  // Calculate the factorial of the number.
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }

  // Print the factorial of the number.
  printf("The factorial of %d is %d\n", num, factorial);

 //  return 0;
}
