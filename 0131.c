#include <stdio.h>

void voltas_calc(int n){
  float voltas[n];
  float tempo = 50000000;
  float media = 0;
  int volta = 0;
  for(int i = 0; i < n; i++){
    scanf("%f", &voltas[i]);
    if (voltas[i] < tempo){
      tempo = voltas[i];
      volta = i + 1;
    }

    media += voltas[i];
  }
  media = media / n;
  printf("numero da volta %d\n tempo da volta %f\n media %f", volta, tempo, media);
}


int main(){
  int n;
  printf("digite o numero de voltas\n");
  scanf("%d", &n);
  voltas_calc(n);
    return 0;
}
