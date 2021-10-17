#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
int main (void){


    int qnt_elementos, aux, vetor;
    int *n; // MEU VETOR 

    printf("Digite a quantidade de elementos do seu vetor \n");
    scanf("%d", &qnt_elementos);
    n =  (int *)(malloc (qnt_elementos * sizeof(int)));
    
    srand(time(NULL));
    for (int i = 0; i < qnt_elementos; i++){
        n[i] = rand();
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
    
    free(n);
    
}
