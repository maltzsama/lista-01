#include <stdio.h>

int busca(int vet[5], int n){
    for(int i = 0; i < 5; i++){
        if(n == vet[i])
            return i;
    }

    return -1;
}

int main(){
    int a[5] = {1,3,2,4,5};
    int n = 6;
    printf("%d", busca(a, n));

    return 0;
}
