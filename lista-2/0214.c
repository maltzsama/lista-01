#include <stdio.h>

int fat(int n){
  if ((n==1) || (n==0))
      return 1;
  else
      return fat(n-1)*n;
}

int main(int argc, char const *argv[]) {
  int n;
  printf("numero:\n");
  scanf("%d",&n);
  printf("%d\n", fat(n));
  return 0;
}
