#include <stdio.h>

int conta_matriz(int a[3][3], int n){
  int count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (n == a[i][j])
        count++;
    }
  }
  return count;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  printf("%d\n", conta_matriz(a, 3));
  return 0;
}
