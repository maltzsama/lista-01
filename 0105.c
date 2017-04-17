#include <stdio.h>

int fatorial(int n){
    int fat = 1;

    if (n == 0)
        return fat;

    for(; n > 1; n--){
        fat = fat * n;
    }
    return fat;
}

int main(){
    int n;
    printf("digite o fatorial\n");
    scanf("%d", &n);
    printf("%d", fatorial(n));
    return 0;
}
