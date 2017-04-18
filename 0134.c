#include <stdio.h>

void imprima(int vetor[10]){
  int maior = 0;
  int menor = 100000;
  for (int i = 0; i < 10; i++) {
    if (maior < vetor[i])
      maior = vetor[i];
    if (menor > vetor[i])
      menor = vetor[i];
  }

  printf("%d %d\n", maior, menor);
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    imprima(vet);
    return 0;
}
