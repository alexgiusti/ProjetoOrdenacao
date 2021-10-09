#include <stdio.h>
int main (){
    int vetor[100], aux;

    for (int i = 0; i < 100; i++){
        printf("Numero posicao %d no vetor", i);
        scanf("%d", &vetor[i]);
    }
}