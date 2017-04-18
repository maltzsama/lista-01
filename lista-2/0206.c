#include <stdio.h>
/*Escreva uma função que receba um matriz A[3][3] e retorne o índice da
coluna com maior valor de somatório.*/

int maior_matrix(int a[3][3]){
  float count = 0;
  int v[3] = {0};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      v[j] += a[i][j];
    }
  }

  int maior = 0;
  int idx;
  for (int i = 0; i < 3; i++) {
    if (v[i] > maior){
      maior = v[i];
      idx = i;
    }
  }
  return idx;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {0,2,13,4,5,6,7,8,9};
  printf("%d\n", maior_matrix(a));
  return 0;
}
