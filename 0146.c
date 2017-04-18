#include <stdio.h>
#include <stdlib.h>

int a[50];

void gen_random(){

  for (int i = 0; i < 50; i++) {
    a[i] = rand() % 100 + 1;
    printf("%d \n", a[i]);
  }
}

int check_list(int n){
  int pos = -1;
  for (int i = 0; i < 50; i++) {
    if(n == a[i])
      pos = i + 1;
  }
  return pos;
}

int main(){
  int num;
  gen_random();
  scanf("%d\n", &num);
  printf("%d\n", check_list(num));
    return 0;
}
