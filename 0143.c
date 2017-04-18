#include <stdio.h>

void vect(int a[10]){
  for (int i = 0; i < 10; i++) {
    a[i] = i + 1;
  }
  for (int i = 0; i < 10; i++) {
    printf("%d\n", a[i]);
  }
}

int main(){
    int a[10];
    vect(a);
    return 0;
}
