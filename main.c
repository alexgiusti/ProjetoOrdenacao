#include <stdio.h>
#include <stdlib.h>

void mostraVetor(int vetor[], int tam)
{
    for (int j=0; j<tam; j++)
       printf("%d ",vetor[j]);
}


int main()
{
    int tam;
    int i;
    int metodo;

    printf("Bem vindo ao sistema de Organizacao de Vetores :)");
    printf("\nPor favor, insira o tamanho do vetor que deseja ordenar:");
    scanf("%d", &tam);
    printf("\n\nO tamanho do vetor selecionado foi de %d casas",tam);

    int vetor[tam];
    printf("\n\nVetor criado: ");
    for(i = 0; i < tam; i++)
    {
        vetor[i]= rand() % tam*2;
    } 

	mostraVetor(vetor, tam);
	
	printf("\n\nSelecione o metodo de ordenacao: \n\n1:Bubble Sort\n2:Selection Sort\n3:Insertion Sort\n4:Shell Sort\n\n");
	scanf("%d", &metodo);
	
	switch(metodo)
	{
		case 1 :
			printf("\n\nMetodo Bubble Sort Selecionado");
			break;

		case 2 :
			printf("\n\nMetodo Selection Sort Selecionado");
			break;

		case 3 :
			printf("\n\nMetodo Insertion Sort Selecionado");
			break;

		case 4 :
			printf("\n\nMetodo Shell Sort Selecionado\n\nVetor Ordenado: ");
			shellSort(vetor, tam);
			mostraVetor(vetor, tam);
			break;

		default :
			printf("\n\nMetodo Invalido");
			break;												
	}
}