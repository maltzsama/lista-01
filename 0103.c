#include <stdio.h>

void func_media(){
    unsigned int v[5];
    unsigned int media = 0;
    unsigned int maior = 0;
    unsigned int menor = 0;
    unsigned int mediana = 0;
    for(int i = 0; i < 5; i++){
        printf("leia altura");
        scanf("%d", &v[i]);
        media += v[i];
    }
    media = media/5;

    for(int i = 0; i < 5; i++){
        if (v[i] < media)
            menor++;
        else if (v[i] > media)
            maior++;
        else
            mediana++;
    }

    printf("maior %d, menor %d, media %d", maior, menor, mediana);
}

int main(){
    func_media();
    return 0;
}
