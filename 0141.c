#include <stdio.h>

int b[10];

void convert(int a[10]){
  for (int i = 0; i < 10; i++) {
    if (a[i] < 0)
    b[i] = a[i] * (-1);
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", b[i]);
  }
}

int main(){
  int a[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
  convert(a);
  return 0;
}
