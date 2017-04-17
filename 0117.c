#include <stdio.h>

void coleta(int n){
    float salarios[n];
    int filhos[n];
    float count_sal = 0;
    float count_filhos = 0;

    float menor = 100000;
    float maior = 0;

    for(int i = 0; i < n; i++){
        printf("digite salario\n");
        scanf("%f", &salarios[i]);
        printf("filhos\n");
        scanf("%d", &filhos[i]);

        count_sal += salarios[i];
        count_filhos += filhos[i];

        if (salarios[i] > maior)
            maior = salarios[i];
        if (salarios[i] < menor)
            menor = salarios[i];
    }

    count_sal = count_sal/n;
    count_filhos = count_filhos/n;

    int menor_sal = 0;

    for(int i = 0; i < n; i++){
        if(salarios[i] < count_sal)
            menor_sal++;
    }


    printf("media salaria %f\n", count_sal);
    printf("media filhos %f\n", count_filhos);
    printf("maior %f, menor %f", maior, menor);
    count_sal = menor_sal *100 /n;
    printf("percentual abaixo %f", count_sal);


}

int main(){

    int n;

    printf("leia um numero\n");
    scanf("%d", &n);
    coleta(n);

    return 0;
}
