#include <stdio.h>
#define TAM 5

void soma_vec(int a[TAM], int b[TAM]){
    int vec_c[TAM];

    for(int i = 0; i < TAM; i++){
        vec_c[i] = a[i] + b[i];
    }

    for (int i = 0; i < TAM; i++){
        printf("%d\n", vec_c[i]);
    }

}
        

int main(){
    int  a[TAM], b[TAM];
    for(int i = 0; i < TAM; i++){
        printf("digite valor %d", i);
        scanf("%d", &a[i]);

        printf("digite valor %d", i);
        scanf("%d", &b[i]);
    }

    soma_vec(a, b);
    return 0;
}
