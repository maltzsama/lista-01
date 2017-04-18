/*11.Dados 3 vetores de 10 elementos inteiros, crie uma função que devolva o

maior somatório de seus elementos.*/

#include<stdio.h>

float soma (int vet[], int n) {
   if (n == 0)
      return 0;
   else {
      float s;
      s = soma (vet, n-1);
      if (vet[n-1] > 0) s += vet[n-1];
      return s;
   }
}

float media(int a[], int n){
  float as = soma(a, n);
  float media = (as/n);

  return media;
}

int main(int argc, char const *argv[]) {
  int c = 10;
  int a[10] = {1,2,3,4,5,6,7,8,9,3};
  printf("%.2f\n", media(a, c));
  return 0;
}
