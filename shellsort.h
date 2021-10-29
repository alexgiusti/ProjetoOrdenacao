#ifndef shellsort_h
#define shellsort_h

int shellSort(int vetor[], int tam)
{
	int gap, i;
    for (gap = tam/2; gap > 0; gap /= 2)
    {

        for (i = gap; i < tam; i += 1)
        {

            int temporario = vetor[i];
            int j;           
            for (j = i; j >= gap && vetor[j - gap] > temporario; j -= gap)
                vetor[j] = vetor[j - gap];
             

            vetor[j] = temporario;
        }
    }
    return 0;
}
#endif
