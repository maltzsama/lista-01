#include <stdio.h>
char alfabet[26] = {'a', 'b', 'c', 'd', 'e',
'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
'v', 'w', 'x', 'y', 'z'};

void distance(char a, char b){
  int pont1 = 0;
  int pont2 = 0;
  for (int i = 0; i < 26; i++) {
    if (alfabet[i] == a)
      pont1 = i;
    if (alfabet[i] == b)
      pont2 = i;
  }
  if(pont1 > pont2)
    printf("error");
  else
    printf("distance %d\n", pont2 - pont1);
}

int main(){
  distance('a', 'z');
  return 0;
}
