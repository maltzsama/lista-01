#include <stdio.h>

int conta(int a[3][3], int b){
  float count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (a[i][j] > b)
        count += a[i][j];
    }
  }
  return (count);
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  int b = 3;
  printf("%d\n", conta(a, b));
  return 0;
}
