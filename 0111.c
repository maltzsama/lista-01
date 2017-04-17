#include <stdio.h>

void calcula_tempo(float massa){
    int tempo = 0;
    int t_h = 0;
    int t_m = 0;
    int t_s = 0;
    float massa_final = massa;
    while(massa_final >= 0.5){
        massa_final = massa_final / 2;
        tempo += 50;
    }

    printf("massa final %f\n", massa_final);
    t_h = tempo / 3600;
    t_m = (tempo % 3600) /60;
    t_s = (tempo % 3600) % 60;
    printf("%d:%d:%d", t_h, t_m, t_s);
    
}

int main(){
    float x;
    printf("digite a massa do material\n");
    scanf("%f", &x);
    calcula_tempo(x);
    return 0;
}
