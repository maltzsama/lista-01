#include <stdio.h>

float multiplus(int n, int k){
  int i = 0;
  float soma = 0;
  for (int i = 0; i < n; i++) {
    float x = i * k;
    soma += x;
  }
  return soma;
}

int main(){
  int n = 10, k = 20;
  printf("%.2f\n", multiplus(10, 20));
  return 0;
}
