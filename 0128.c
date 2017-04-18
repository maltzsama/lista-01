#include <stdio.h>

float alunos(int n){
    float notas[n];
    float media = 0;
    for (int i = 0; i < n; i++) {
      printf("leia aluno\n");
      scanf("%f", &notas[i]);
      media += notas[i];
    }
    media = media /n;
    int count = 0;

    for(int i = 0; i < n; i++){
      if (notas [i] > media)
        count++;
    }
    return count;
}

int main(){

    int n = 3;

    printf("%f\n", alunos(n));

    return 0;
}
