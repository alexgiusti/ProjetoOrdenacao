#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "shellsort.h"
#include "countingsort.h"
#include "InsertionSort.h"
#include "selectionSort.h"
#include "BubleSortFabioHenrique.h"
#include "QuickBenatti.h"



void mostraVetor(int vetor[], int tam)
{
	int i;
    for (i=0; i<tam; i++)
       printf("%d ",vetor[i]);
}


int main()
{
    int tam;
    int i;
    int metodo;

    printf("Bem vindo ao sistema de Organizacao de Vetores :)");
    printf("\nPor favor, insira o tamanho do vetor que deseja ordenar: ");
    scanf("%d", &tam);
    printf("\n\nO tamanho do vetor selecionado foi de %d casas",tam);

    int vetor[tam];
    printf("\n\nVetor criado: ");
    for(i = 0; i < tam; i++)
    {
        vetor[i]= rand() % tam*2;
    } 

	mostraVetor(vetor, tam);
	
	printf("\n\nSelecione o metodo de ordenacao: \n\n1:Bubble Sort\n2:Selection Sort\n3:Insertion Sort\n4:Shell Sort\n5:Counting Sort\n6:Quick Sort\n\n");
	scanf("%d", &metodo);
	
	switch(metodo)
	{
		case 1 :
			printf("\n\nMetodo Bubble Sort Selecionado");
			BubleSort(vetor, tam);
			mostraVetor(vetor, tam);
			break;

		case 2 :
			printf("\n\nMetodo Selection Sort Selecionado");
            selectionSort(vetor, tam);
            mostraVetor(vetor, tam);
			break;

		case 3 :
			printf("\n\nMetodo Insertion Sort Selecionado");
			InsertionSort(vetor, tam);
			mostraVetor(vetor, tam);

			break;

		case 4 :
			printf("\n\nMetodo Shell Sort Selecionado\n\nVetor Ordenado: ");
			shellSort(vetor, tam);
			mostraVetor(vetor, tam);
			break;
			
		case 5:
			printf("\n\nMetodo Counting Sort Selecionado\n\nVetor Ordenado: ");
			countingSort(vetor, tam);
			mostraVetor(vetor, tam);
			break;
		case 6:
			printf("\n\nMetodo Quick Sort Selecionado\n\nVetor Ordenado: ");
			Quick(vetor, tam);
			mostraVetor(vetor, tam);
			break;

		default :
			printf("\n\nMetodo Invalido");
			break;												
	}
}
