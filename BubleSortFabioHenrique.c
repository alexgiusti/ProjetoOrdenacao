#include <stdio.h>
#include <stdlib.h>   
int main (void){


    int qnt_elementos, aux, vetor;
    int *n;

    printf("Digite a quantidade de elementos do seu vetor \n");
    scanf("%d", &qnt_elementos);
    n =  (int *)(malloc (qnt_elementos * sizeof(int)));
    

    for (int i = 0; i < qnt_elementos; i++){
        printf("Numero posicao %d no vetor \n ", i);
        scanf("%d", &n[i]);
    }
    for (int x = 0; x < qnt_elementos; x++){
        for(int y = x; y < qnt_elementos; y++){
            if(n[x] > n[y]){
                aux = n[x];
                n[x] = n[y];
                n[y] = aux;
            }
        }
    }
    for ( int i = 0; i < qnt_elementos; i++){
        printf("numero %d eh: %d \n", i, n[i]);
    }
    
}
