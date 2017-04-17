#include <stdio.h>

void multi(int vet[10]){
    float array[10];
    for (int i = 0; i < 10; i++){
        array[i] = vet[i] * vet[i+1];
    }

    for (int i = 0; i < 10; i++){
        printf("%.2f\n", array[i]);
    }
        
}

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,0};
    multi(vetor);

    return 0;
}
