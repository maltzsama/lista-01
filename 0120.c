#include <stdio.h>


void revert(int a[10]){
    int b[10];
    int j = 9;
    
    for(int i = 0; i < 10; i++){
        b[i] = a[j - i];
    }
    for(int i = 0; i < 10; i++){
        printf("a %d, b %d\n", a[i], b[i]);
    }
}
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    revert(a);

    return 0;
}
