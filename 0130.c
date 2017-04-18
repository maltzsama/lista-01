#include <stdio.h>
#include <math.h>
// #define M_PI 3.14159265358979323846

void print_circulo(int r){
  float volume = 3.0/4.0 * M_PI * pow(r, 3);
  float area = 4 * M_PI * pow(r,2);

  printf("volume %.2f, area %.2f \n", volume, area);
}

int main(){
    print_circulo(10);

    return 0;
}
