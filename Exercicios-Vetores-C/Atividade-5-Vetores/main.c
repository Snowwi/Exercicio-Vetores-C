#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    float mediaImpar = 0;
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("Escreva o valor %d do vetor\n", i+1);
        scanf("%f", &v[i]);
        if(v[i] % 2 == 1){
            if(v[i] > 10){
                mediaImpar = mediaImpar + v[i];
                printf("%f", mediaImpar);
            }
        }
    }
    mediaImpar = mediaImpar / 5;

    printf("A media dos impares maiores que 10 é %f", mediaImpar);
}

