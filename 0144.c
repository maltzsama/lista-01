#include <stdio.h>

void func_vec(int a[9], int b[9], int c[9]){
  int arr[9];
  for(int i = 0; i < 3; i++){
    arr[i] = a[i];
    arr[i+3] = b[i+3];
    arr[i+6] = c[i+6];
  }
  for(int i =0 ; i < 9; i++)
    printf("%d\n", arr[i]);
}

int main(){
  int a[9] = {1,2,3,4,5,6,7,8,9};
  int b[9] = {4,5,6,7,8,9,10,11,12};
  int c[9] = {7,8,9,10,11,12,13,14,15};
  func_vec(a, b, c);
    return 0;
}
