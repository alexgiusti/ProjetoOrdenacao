#ifndef QuickBenatti_H
#define QuickBenatti_H

/*
void Quick(int vetor[], int esquerda, int direita);
 
int main()
{
    
	int tam;
    int i;

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

 Quick(vetor, 0, tam - 1);

 printf("\n\nValores Ordenados:\n");
 for(i = 0; i < tam; i++)
 {
  printf("%d\n", vetor[i]);
 }
 system("pause");
 return 0;
}*/

int Quick(int vetor[], int tam){
   
   int pivo, aux, i, j, meio;
   
   i = vetor[0];
   j = vetor[tam];
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   
   if(vetor[0] < j) Quick(vetor, vetor[tam]);
   if(vetor[0] < vetor[tam]) Quick(vetor, vetor[tam]);   
   
}
   
#endif
   	

