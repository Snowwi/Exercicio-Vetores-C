#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[2];
    int v2[2];
    int vr[2];

    int i;

    for(i = 0 ; i < 10 ; i++){
        printf("Digite o valor do %d do primeiro vetor \n", i+1);
        scanf("%i", &v1[i]);
        printf("Digite o valor do %d do segundo vetor \n", i+1);
        scanf("%i", &v2[i]);

        vr[i] = v1[i] * v2[i];

        printf("Multiplicação do primeiro com segundo -> %i\n\n", vr[i]);
    }
}
