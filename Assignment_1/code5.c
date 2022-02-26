#include<stdio.h>
int main() {
      float first, second, temp;
      printf("Enter first number: ");
      scanf("%f", &first);
      printf("Enter second number: ");
      scanf("%f", &second);
      temp = first;
      first = second;
      second = temp;
      printf("\nAfter swapping, firstNumber = %f\n", first);
      printf("After swapping, secondNumber = %f", second);
      return 0;
}

