#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE* input;
  input = fopen("file.txt", "r");

  if (input == NULL) {
    printf("Não foi possivel abrir o arquivo\n");
    exit(EXIT_FAILURE);
  }
  while (true) {
    char line[50];
    int can_read = fscanf(input, "%s", &line);
    if (can_read != 1) {
      break;
    }
    printf("Line: %s\n", line);
  }
  fclose(input);
  return 0;
}
