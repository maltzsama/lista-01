#include <stdio.h>

void count_func(int a[20]){
  int count_par = 0;
  int count_5 = 0;

  for (int i = 0; i < 20; i++) {
    if(a[i] % 2 == 0)
      count_par++;
    if (a[i] % 5 == 0)
      count_5++;
  }
  printf("%d, %d\n", count_par, count_5);
}

int main(){

    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    count_func(a);
    return 0;
}
