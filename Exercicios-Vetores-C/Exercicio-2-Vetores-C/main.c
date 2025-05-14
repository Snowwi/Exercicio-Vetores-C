#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[20];
    int i;
    int numPares;

    for(i = 0; i < 20; i++){
        printf("Digite o valor do %d\n", i+1);
        scanf("%f", &v[i]);
        if(v[i] % 2 = 0){
            numPares++;
        }
    }

    printf("A quantidade de numeros pares e: %.0f", numPares);
}
