#include <stdio.h>

const char * this_triangle(int a, int b, int c){
    if ( a <= b + c && b <= a + c && c <= a + b){
        if ( a == b && b == c)
            return "Equilatero";
        else if (a == b || a == c || b == c)
            return "Isosceles";
        else
            return "Escaleno";
    }
    else
        return "NAO e triangulo";

}

void main(void){
    printf("%s\n", this_triangle(3,4,1));
    printf("%s\n", this_triangle(2,2,4));
    printf("%s\n", this_triangle(5,5,5));
    printf("%s\n", this_triangle(3,2,6));
}
