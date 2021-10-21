#include <stdio.h>
#include <stdlib.h> 

void selectionSort (int vetor[], int tam){
 int i, j, k, t;

  for(i=0; i<tam-1; i++){
      for(k=i+1; k<tam; k++){
          if(vetor[k] < vetor [i]{ 
            t = vetor[i];
            vetor[i] = vetor[k];
            vetor[k] = t;
          }
      }  
  }
  
  printf ("\n Os números ordenados: \n");
  
  for(k=0; k<tam; k++){
      printf("%i\n", v[k]);
  }

