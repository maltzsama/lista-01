#include <stdio.h>

float media_pond(unsigned int n){
    float nota, peso, media = 0;
    int pesos = 0;
    for(int i = 0; i < n; i++){
        printf("digite nota\n");
        scanf("%f", &nota);
        printf("digite peso\n");
        scanf("%f", &peso);
        media += (nota * peso);
        pesos += peso;
    }
    printf("%f", (media/pesos));
    return media/n;
}

int main(){
    unsigned int n;

    printf("leia o numero de avaliacoes\n");
    scanf("%d", &n);
    media_pond(n);

    return 0;
}
