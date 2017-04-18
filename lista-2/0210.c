#include<stdio.h>

int soma (int vet[9], int n) {
   if (n == 0)
      return 0;
   else {
      int s;
      s = soma (vet, n-1);
      if (vet[n-1] > 0) s += v[n-1];
      return s;
   }
}
int main(int argc, char const *argv[]) {
  int a[9] = {1,2,3,4,5,6,7,8,9};
  int n = 9;
  printf("%d\n", soma(a, n));
  return 0;
}
