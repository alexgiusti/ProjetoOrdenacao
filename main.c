#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
    printf("\n\nVetor criado:");
    for(i = 0; i < tam; i++)
    {
        vetor[i]= rand() % tam*2;
        printf(" %d",vetor[i]);
    } 
	printf("Selecione o metodo de ordenacao: \n\n1:Bubble Sort\n2:Selection Sort\n3:Insertion Sort\n4:Shell Sort");
	scanf("%d", &metodo)
	
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
			printf("\n\nMetodo Shell Sort Selecionado");
			break;

		default :
			printf("\n\nMetodo Invalido");
			break;												
	}
	getch();
}
