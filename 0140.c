#include <stdio.h>

void print(int n){
  int mediana = n / 2;
  for (int j = 0; j < mediana + 1 ; j++){
    for(int i = j; i < n; i++){
      printf("%d ", i + 1);
    }
    printf("\n");
    n--;
  }
}

int main(){
  print(9);
  return 0;
}
