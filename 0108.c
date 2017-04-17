#include <stdio.h>
#define TAM 5

void alunos(){
    int sexo[TAM], alt[TAM];
    float media = 0;
    for(int i = 0; i < TAM; i++){
        printf("digite o sexo(1 = masculino/ 2 = feminino)i\n");
        scanf("%d", &sexo[i]);
        printf("digite altura\n");
        scanf("%d", &alt[i]);
        media += alt[i];
    }
    float med_m = 0;
    int n_m = 0;
    int maior = 0;
    int menor = 100;

    for(int i = 0; i < TAM; i++){
        if(sexo[i] == 2){
            med_m += alt[i];
            n_m++;
        }

        if(maior < alt[i])
            maior = alt[i];

        if(menor > alt[i])
            menor = alt[i];
    }

    med_m = med_m /n_m;
    media = media/TAM;

    printf("media da turma %f media mulheres %f, maior altura %d, menor altura %d", media, med_m, maior, menor);
}

int main(){
    alunos();
    return 0;
}
