#include <stdio.h>
#include <stdlib.h>
int main() {
  char name[7] = "Eduardo";
  char last_name[8] = "Barbieri";
  for(int x = 0; x < 100; x++){
    printf("%s", *(&last_name + x));
  }
  printf("\n");
  return 0;
}
