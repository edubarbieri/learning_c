#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int x;
  printf("Informa o numero de posicoes do eixo x: ");
  scanf("%d", &x);

  int y;
  printf("Informa o numero de posicoes do eixo y: ");
  scanf("%d", &y);

  // Inicializa  a matriz
  int **matriz = NULL;
  matriz = malloc(x * sizeof(int *));
  for (int i = 0; i < x; ++i) {
    matriz[i] = malloc(y * sizeof(int));
  }

  // le as posições do vetor
  for (int idx_x = 0; idx_x < x; idx_x++) {
    for (int idx_y = 0; idx_y < y; idx_y++) {
      printf("Informa o valor para posição [%d][%d]: ", idx_x, idx_y);
      scanf("%d", &matriz[idx_x][idx_y]);
    }
  }
  //imprime

    // le as posições do vetor
  for (int idx_x = 0; idx_x < x; idx_x++) {
    for (int idx_y = 0; idx_y < y; idx_y++) {
      if(idx_y == 0){
        printf("%d", *(*(matriz + idx_x) + idx_y));
      }else{
        char str[100];
        sprintf(str, "%d", matriz[idx_x][idx_y -1]);
        unsigned int size = strlen(str);
        printf("% *d", 10 - size, matriz[idx_x][idx_y]);
      }
    }
    printf("\n");
  }
  return 0;
}
