#include <stdio.h>

/*
 * Se o protótipo é disponibilizado, o compilador irá detectar o erro
 * na função main(). Se ele é omitido, o erro não será notificado.
 */
int fac(int n); /* Protótipo da função "fac" */

void change(int* number, int value);

int main() {
  int number;
  printf("Please, enter a number: ");
  scanf("%d", &number);
  printf("You entered %d\n", number);

  int i;
  for (i = 0; i < number; i++) {
    printf("Current number %d\n", (i + 1));
  }

  printf("fc %d\n", fac(number));

  printf("sizeof number: %d bytes\n", sizeof(number));

  printf("Before change value %d\n", number);
  change(&number, 4);
  printf("After change value %d\n", number);
  return 0;
}

/*
 * Definição da função "fac"
 */
int fac(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fac(n - 1);
  }
}

void change(int* number, int value) { *number = value; }