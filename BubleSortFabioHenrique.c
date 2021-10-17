#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
int main (void){


    int qnt_elementos, aux, range_numero;
    int *vetor; 

    printf("Digite a quantidade de elementos do seu vetor \n");
    scanf("%d", &qnt_elementos);
    vetor =  (int *)(malloc (qnt_elementos * sizeof(int)));
    srand(time(NULL));
    printf("Informe ate que numero sera gerado os numeros aleatorios \n");
    scanf("%d", &range_numero);
    for (int i = 0; i < qnt_elementos; i++){
       vetor[i] = rand() % range_numero;
    }
    for (int x = 0; x < qnt_elementos; x++){
        for(int y = x; y < qnt_elementos; y++){
            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
    for ( int i = 0; i < qnt_elementos; i++){
        printf("numero %d eh: %d \n", i, vetor[i]);
    }
    
    free(vetor);
    
}
