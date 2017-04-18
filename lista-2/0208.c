/*
Escreva uma função que receba três matrizes de ordem 3 - A, B e C e retorne
a soma das médias de seus elementos.
*/

#include <stdio.h>

float conta(int a[3][3]){
  float count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      count += a[i][j];
    }
  }
  return (count / 9);
}

float soma_media_matrix(int a[3][3], int b[3][3], int c[3][3]){

  float as = conta(a);
  float bs = conta(b);
  float cs = conta(c);

  return as+bs+cs;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  int c[3][3] = {1,2,3,4,5,6,7,8,59};
  int b[3][3] = {1,2,3,4,5,6,7,8,39};
  printf("%.2f\n", soma_media_matrix(a, b, c));
  return 0;
}
