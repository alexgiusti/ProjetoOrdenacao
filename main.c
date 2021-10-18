#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=0;

    printf("Bem vindo ao sistema de Organização de Vetores :)");
    printf("\nPor favor, insira o tamanho do vetor que deseja ordenar:");
    scanf("%d",&tam);
    printf("\n\nO tamanho do vetor selecionado foi de ",tam," casas;");

    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        vetor[i]= rand() % tam*2;
        printf(vetor[i]);
    } 
	
	
}
