#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[10];
    int i;
    float maior, soma, media;

    for (i = 0; i < 10; i++){
        printf("Digite o %d o valor\n", i+1);
        scanf("%f", &v[i]);
    }

    maior = v[0];

    for (i = 1; i < 10; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }

    printf("Maior valor: %f\n", maior);

    soma = 0;
    for (i = 0; i < 10; i++){
        soma = soma + v[i];
    }

    printf("A soma e: %f\n", soma);

    media = soma / 10;
    printf("A media e: %f\n", media);

    for(i=0; i < 10; i++){
        if (v[i] > media){
            printf("%f\n", v[i]);
        }
    }

}

