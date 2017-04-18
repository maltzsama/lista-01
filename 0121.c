#include <stdio.h>

int comp_vet(int a[5], int b[5]){

    for(int i = 0; i < 5 ; i++){
        if ((a[i] != b[i]))
            return 0;
    }
    return 1;
}

int main(){
    int a[5] = {1,2,5,4,5};
    int b[5] = {1,2,3,4,5};
    printf("%d", comp_vet(a, b));
    return 0;
}
