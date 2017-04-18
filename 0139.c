#include <stdio.h>

float calc_nota(float a[3], float me){
  float media = 0;
  for (int i = 0; i < 3; i++) {
    media += a[i] * (i+1);
  }
  return (media + me) / 7.0;
}

int main(int argc, char const *argv[]) {
  float vet_a[3] = {10, 8.5, 9.3};
  float vet_b = 9.3;
  printf("%f\n", calc_nota(vet_a, vet_b));
  return 0;
}
