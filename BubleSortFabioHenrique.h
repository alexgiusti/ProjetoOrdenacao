#ifndef BubleSortFabioHenrique_H
#define BubleSortFabioHenrique_H


//int qnt_elementos, range_numero;
int BubleSort(int qnt_elementos, int range_numero){
    
    int aux;
    int *vetor; 

   /* printf("Digite a quantidade de elementos do seu vetor \n");
      scanf("%d", &qnt_elementos); 
      Caso o usuario queira interagir com a interface
      */

    vetor =  (int *)(malloc (qnt_elementos * sizeof(int)));
    srand(time(NULL));

    /*printf("Informe ate que numero sera gerado os numeros aleatorios \n");
      scanf("%d", &range_numero); 
      Caso o usuario queira interagir com a interface */
      if(qnt_elementos == 0 || range_numero == 0)
          printf("Os numeros dos argumentos sao invalidos, tente outros \n");
      
      else 
          printf("Numeros validos para ordenacao, Ordenando \n");
      

    for (int i = 0; i < qnt_elementos; i++){
      // vetor[i] = rand() % range_numero;
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


 



#endif
