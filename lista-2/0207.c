
/*Escreva uma função que receba três matrizes de ordem 3 - A, B e C e retorne
o valor do menor somatório entre elas.*/

#include <stdio.h>

int conta(int a[3][3]){
  int count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      count += a[i][j];
    }
  }
  return count;
}

int maior_matrix(int a[3][3], int b[3][3], int c[3][3]){

  int as = conta(a);
  int bs = conta(b);
  int cs = conta(c);

  if(as < bs && as < cs)
    return as;
  else if(bs < as && bs < cs)
    return bs;
  return cs;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  int c[3][3] = {1,2,3,4,5,6,7,8,59};
  int b[3][3] = {1,2,3,4,5,6,7,8,39};
  printf("%d\n", maior_matrix(a, b, c));
  return 0;
}
