#ifndef selectionsort_h
#define selectionsort_h

int selectionSort (int vetor[], int tam){
 int i, j, k, t;

  for(i=0; i<tam-1; i++){
      for(k=i+1; k<tam; k++){
          if(vetor[k] < vetor [i]){ 
            t = vetor[i];
            vetor[i] = vetor[k];
            vetor[k] = t;
          }
      }  
  }
  
  printf("\n Os nÃºmeros ordenados: \n");
  
  for(k = 0; k < tam; k++){
      printf("%i\n", vetor[k]);
   
 return 0;
  
 }
}

#endif
