#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


char* read_line(FILE* file);

int main() {
  FILE* input;
  input = fopen("file.txt", "r");

  if (input == NULL) {
    printf("Não foi possivel abrir o arquivo\n");
    exit(EXIT_FAILURE);
  }
  char* line;
  while ((line = read_line(input)) != NULL) {
    printf("Line: %s\n", line);
    free(line);
  }
  fclose(input);
  return 0;
}

char* read_line(FILE* file) {
  int index = 0;
  int size = 64;
  int ch;
  char* line;
  // inicializa a string com tamanho inicial
  line = malloc(size + 1);
  while ((ch = getc(file)) != '\n' && ch != EOF) {
    // realoca a a string se atingiu o tamanho maximo
    if (index == size) {
      size *= 2;
      line = realloc(line, size + 1);
    }
    line[index++] = ch;
  }
  if (index == 0 && ch == EOF) {
    free(line);
    return NULL;
  }
  // Ultimo byte da string sempre eh \0
  line[index] = '\0';
  // realoca para o tamanho final, não deixando bytes sem uso
  line = realloc(line, index + 1);
  return line;
}
