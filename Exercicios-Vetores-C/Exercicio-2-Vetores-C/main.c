#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4];
    int i;
    int numPares = 0;

    for(i = 0; i < 4; i++){
        printf("Digite o valor do %d\n", i+1);
        scanf("%i", &v[i]);
        if(v[i] % 2 == 0){
            numPares++;
        }
    }

    printf("A quantidade de numeros pares e: %i", numPares);
}
