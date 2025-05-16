#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o valor do %d\n", i+1);
        scanf("%i", &v[i]);
        if(v[i] > 0){
            printf("%i\n", v[i]);
        }
    }
}
