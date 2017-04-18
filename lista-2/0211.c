/*11.Dados 3 vetores de 10 elementos inteiros, crie uma função que devolva o

maior somatório de seus elementos.*/

#include<stdio.h>

int soma (int vet[10], int n) {
   if (n == 0)
      return 0;
   else {
      int s;
      s = soma (vet, n-1);
      if (vet[n-1] > 0) s += vet[n-1];
      return s;
   }
}

int maior(int a[10], int b[10], int c[10]){
  int n = 10;
  int as = soma(a, n);
  int bs = soma(b, n);
  int cs = soma(c, n);

  if(as > bs && as > cs)
    return as;
  if(bs > as && bs > cs)
    return bs;
  return cs;
}

int main(int argc, char const *argv[]) {
  int a[10] = {1,2,3,4,5,6,7,8,9,0};
  int b[10] = {1,2,3,4,5,6,7,8,9,10};
  int c[10] = {1,2,3,4,5,6,7,8,9,20};

  printf("%d\n", maior(a, b, c));
  return 0;
}
