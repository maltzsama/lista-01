#include <stdio.h>
#define TAM 20

void pesquisa(){
    int sexos[TAM], respostas[TAM];
    int n_sim = 0;
    int n_nao = 0;
    int n_f_sim = 0;
    int n_m_nao = 0;
    for(int i = 0; i < TAM; i++){
        printf("digite o sexo\n");
        scanf("%d", &sexos[i]);
        printf("digite a resposta\n");
        scanf("%d", &respostas[i]);
        if (respostas[i] == 1){
            n_sim++;
            if(sexos[i] == 2)
                n_f_sim++;
        }
        else{
            n_nao++;
            if(sexos[i] == 1)
                n_m_nao++;
        }
    }

    printf("pessoas sim %d", n_sim);
    printf("pessoas nao %d", n_nao);
    float x = n_f_sim * 100 /TAM;
    printf("porcentagem mulheres sim %f",x);
    x = n_m_nao * 100 / TAM;
    printf("porcentagem homens nao %f", x);
    

}

int main(){
    pesquisa();

    return 0;
}
