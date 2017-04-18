#include <stdio.h>

int conta_matriz(int a[3][3], int n[3]){
  int count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++){
        if (n[k] == a[i][j])
          count++;
      }
    }
  }
  if(count == 3)
    return 1;
  return 0;
}

int main(int argc, char const *argv[]) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  int v[3] = {0,2,3};
  printf("%d\n", conta_matriz(a, v));
  return 0;
}
