#include <stdio.h>

float soma(int n){
    float somatorio = n;
    for(int i = 1; i <= 20; i++){
        somatorio += n/i;
    }
    return somatorio;

}
int main(){
    int n;
    printf("digite um numero\n");
    scanf("%d", &n);
    printf("%f", soma(n));

    return 0;
}
