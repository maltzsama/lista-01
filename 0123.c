#include <stdio.h>

void ordena(int vet[10]){
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if (vet[i] > vet[j]){
                int a = vet[i];
                vet[i] = vet[j];
                vet[j] = a;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%d\n", vet[i]);
}

int main(){
    int vet[10] = {12, 45,21, 48, 89, 22, 1, 5, 8, 90};
    ordena(vet);
    return 0;

}
