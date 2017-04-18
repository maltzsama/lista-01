#include <stdio.h>

float soma(int a[5], int b[5]){
    float p = 0;
    for(int i = 0; i < 5; i++){
        p += a[i] * b[i];
    }
    return p;
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {5,4,3,2,1};
    printf("%f", soma(a, b));
    return 0;
}
