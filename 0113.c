#include <stdio.h>

void func(int a, int b, int c){

    for(int i = b; i <= c; i++){
        if (i % a == 0){
            printf("%d \n", i);
        }
    }
}

int main(){
    int a, b, c;

    printf("read a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    func(a,b,c);

    return 0;
}
