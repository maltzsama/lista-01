#include <stdio.h>

int fib(int n){
    int first = 0, second = 1, next, c;
    printf("First %d terms of Fibonacci series are :-\n",n);
    for ( c = 0 ; c < n ; c++ ){
        if ( c <= 1 )
            next = c;
        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n",next);
    }
}

int main(){
    int n;
    printf("digite um numero\n");
    scanf("%d", &n);
    fib(n);
    return 0;
}
