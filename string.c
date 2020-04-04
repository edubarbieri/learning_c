#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char* a = "Eduardo Barbieri";
  printf("%s size: %d\n", a, strlen(a));

  char* number = "1234";
  int num = strtol(number, NULL, 10);
  printf("%d\n", num);

}
