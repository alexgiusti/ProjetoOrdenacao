#include <stdio.h>
int main (){
    int vetor[5], aux;

    for (int i = 0; i < 5; i++){
        printf("Numero posicao %d no vetor \n ", i);
        scanf("%d", &vetor[i]);
    }
    for (int x = 0; x < 5; x++){
        for(int y = x; y < 5; y++){
            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
    if()
    for ( int i = 0; i < 5; i++){
        printf("numero %d eh: %d \n", i, vetor[i]);
    }
}
