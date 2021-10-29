#include "InsertionSort.h"


int InsertionSort(int vetor[], int tam )
{


int n1,n2,aux;
            //int *vetor;

           // vetor= (int*)(malloc(tam*sizeof(int)));

            for(n1=1; n1<=tam-1; n1++)
            {
                for (n2=n1; n2>0 && vetor[n2-1]>vetor[n2]; n2--)
                {
                    aux=vetor[n2];
                    vetor[n2]=vetor[n2-1];
                    vetor[n2-1]=aux;
                }
            }

            printf("\nOs numeros foram ordenados na ordem crescente utilizando o metodo Insertion Sort:  \n");
            for(n1=0;n1<tam;n1++)
            {
                printf("%d \n", vetor[n1]);
            }
            return 0;
}
