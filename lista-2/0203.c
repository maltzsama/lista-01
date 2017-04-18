#include <stdio.h>

void conta_matriz(int a[3][3]){
  int vetor[9];
  int count = 0;
  int n = 1;
  int j;
  int i;
  int k;
  for (k = 0; k < 3; k++){
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        if(a[k][j] == a[k][i]){
          count++;
        }
      }
      printf("%d - %d\n", a[k][i], count);
      count = 0;
    }
  }
}

int main () {
  int a[3][3] = {1,2,2,2,5,6,7,8,9};
  conta_matriz(a);
  return 0;
}
