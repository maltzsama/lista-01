#include <stdio.h>

int imprima(int a[10], int b[5]){
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      if(b[i] == a[j])
        sum += a[j];
    }
  }
  return sum;
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[5] = {1,2,3,4,5};
    printf("%d\n", imprima(vet, b));
    return 0;
}
