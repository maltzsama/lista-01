#include <stdio.h>

float func(float n1, float n2, float n3, char a){
    float media = 0;
    if (a == 'p' || a == 'P'){
        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        return media;
    }
    return ((n1 + n2 + n3)/3.0);

}

int main(){

    float n1, n2, n3;
    char a;

    printf("leia o tipo de media\n");
    scanf("%c", &a);

    printf("leia as notas\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("\n%f\n", func(n1, n2, n3, a));

    return 0;
}
