#include <stdio.h>
#include <stdlib.h>
int main() {
  int vector_size;
  printf("Informe a quantidade de numeros: ");
  scanf("%d", &vector_size);
  int* numbers = malloc(vector_size * sizeof(int));
  for(int i = 0; i < vector_size; i++){
    printf("Informe o valor para a posição %d: ", (i + 1));
    scanf("%d", (numbers + i));
  }
  printf("\n===================================================\n");
  for(int i = 0; i < vector_size; i++){
    printf("Posição: %d, valor %d\n", (i + 1), *(numbers + i));
  }
  free(numbers);
  numbers = NULL;
  return 0;
}
