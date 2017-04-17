#include <stdio.h>
#define TAM 15

void calcula(void){
    int sexos[TAM], cores[TAM], cabelos[TAM], idades[TAM];
    int count_m = 0, count_h = 0;
    int count_c_h = 0;
    float m_idades = 0;
    int maior = 0;
    int menor = 200;

    for(int i = 0; i < TAM; i++){
        printf("leia sexo\n");
        scanf("%d", &sexos[i]);

        if(sexos[i] == 2)
            count_m++;

        if(sexos[i] == 1)
            count_h++;

        printf("leia cor\n");
        scanf("%d", &cores[i]);


        printf("leia cabelo\n");
        scanf("%d", &cabelos[i]);

        printf("leia idades\n");
        scanf("%d", &idades[i]);
        if(idades[i] > maior)
            maior = idades[i];
        if(idades[i] < menor)
            menor = idades[i];

        m_idades += idades[i];
    }

    m_idades = m_idades / TAM;
    float maior_m = 0, por_olhos = 0;
    int n_mu_ol = 0;

    for(int i = 0; i < TAM; i++){
        if(sexos[i] == 2 && idades[i] > m_idades)
            maior_m++;
        if(sexos[i] == 2 && idades[i] >= 18 && idades[i] <= 35 && cores[i]==2 && cabelos[i] == 1)
            n_mu_ol++;

        if(sexos[i] == 1 && cores[i] == 3)
            por_olhos++;

    }

    printf("maior %d, menor %d, media %lf", maior, menor, m_idades); 
    printf("porcentual de homens %d", (count_h*100/TAM));
    printf("porcentual de mulheres %lf", (maior_m * 100/ TAM));
    printf("porcentual de homens com olhos castanhos %lf", (por_olhos *100/TAM));
    printf("o numero de mulheres %d", count_m);
    printf("o porcentual de mulheres com olhos, cabelo, idade... %d", (n_mu_ol * 100 / TAM));
}

int main(){

    return 0;
}
