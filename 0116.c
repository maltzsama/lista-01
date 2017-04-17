#include <stdio.h>

int verifica_numero(int n){
  int soma, divisor;
  soma = 0;

  for (divisor = 1; divisor < n; divisor++){
    if (n % divisor == 0)
      soma = soma + divisor;
  }
  if (n == soma)
    return 1;
  return 0;
}


void print(int n){
    for(int i = 0; i <= n; i++){
        if (verifica_numero(i)){
            printf("%d \n", i);
        }
    }
}

int main(){
    int n;
    printf("digite um numero\n");
    scanf("%d", &n);
    print(n);
    return 0;
}
