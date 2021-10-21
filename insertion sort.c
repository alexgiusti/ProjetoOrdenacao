#include <stdio.h>
#include <stdlib.h>

int main()
{
	InsertionSort();

	return 0;
}

void InsertionSort(void )
{
	int tam;
	int n1,n2,aux;
	int *vet;
	
	vet= (int*)(malloc(tam*sizeof(int)));
	
	printf("\nQuantos números gostaria de inserir no vetor: \n");
	scanf("%d",& tam);
	
	for(n1=0; n1<tam; n1++)
	{
		printf("insira um número que gostaria de ordenar na ordem crescente:   \n");
		scanf("%d",& vet[n1]);
	}

	for(n1=1; n1<=tam-1; n1++)
	{
		for (n2=n1; n2>0 && vet[n2-1]>vet[n2]; n2--)
		{
			aux=vet[n2];
			vet[n2]=vet[n2-1];
			vet[n2-1]=aux;
		}		
	}

	printf("\nOs números que digitou foram ordenados na ordem crescente utilizando o metodo Insertion Sort:  \n");
	for(n1=0;n1<tam;n1++)
	{
		printf("%d \n", vet[n1]);
	}

}