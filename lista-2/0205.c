#include <stdio.h>
/*Escreva uma função que receba um matriz A[3][3] e retorne o total de
elementos com valor abaixo da media de A.*/

int count_matrix(int a[3][3]){
  float count = 0;
  int idx = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      count += a[i][j];
    }
  }

  count = count / 9;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if(a[i][j] > count)
        idx++;
    }
  }

  return idx;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  printf("%d\n", count_matrix(a));
  return 0;
}
