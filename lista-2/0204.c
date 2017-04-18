/*Escreva uma função que receba um matriz A[3][3] e retorne a media dos
elementos de A.*/
#include <stdio.h>

float media_matriz(int matriz[3][3]){
  float calc = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      calc += matriz[i][j];
    }
  }
  calc = calc / (3 * 3);
  return calc;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  printf("%f\n", media_matriz(a));
  return 0;
}
