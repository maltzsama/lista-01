#include <stdio.h>

void multiplus(){
  int n = 0;
  while(n != -1){
    scanf("%d", &n);
    if((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0))
      printf("0\n");
    else if((n % 2 == 0) || (n % 3 == 0))
      printf("1\n");
    else if ((n % 5 != 0) && (n % 7 != 0))
      printf("2\n");
  }
}

int main(){
    multiplus();
    return 0;
}
