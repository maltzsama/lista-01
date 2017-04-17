#include <stdio.h>

void sum_div(int n){
    for(int i = 1; i <= n; i++){
        if ((n % i) == 0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int n;
    printf("leia um numero\n");
    scanf("%d", &n);
    sum_div(n);
    return 0;
}
