#include <stdio.h>


int contem(int a[10], int b[5]){
    int count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            if (b[i] == a[j])
                count++;
        }
    }

    if (count == 5)
        return 1;
    return 0;
}

int main(){

    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int b[5] = {11,2,3,4,5};

    printf("%d", contem(a, b));

    return 0;
}
