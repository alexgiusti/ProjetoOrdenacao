#ifndef QuickBenatti_h
#define QuickBenatti_h

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

int Quick(int vetor[], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
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
   
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   
   	

}