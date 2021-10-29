#include <stdio.h>
#include <stdlib.h>
#include "countingsort.h"

void countingSort(int nums[], int tam) {
  int output[10];
  int i;


  int max = nums[0];
  for (i = 1; i < tam; i++) {
    if (nums[i] > max)
      max = nums[i];
  }

  int count[10];

  for (i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (i = 0; i < tam; i++) {
    count[nums[i]]++;
  }

  for (i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

 
  for (i = tam - 1; i >= 0; i--) {
    output[count[nums[i]] - 1] = nums[i];
    count[nums[i]]--;
  }

  for (i = 0; i < tam; i++) {
    nums[i] = output[i];
  }
}

void imprimeLista(int nums[], int tam) {
	int i;
  for (i = 0; i < tam; ++i) {
    printf("%d  ", nums[i]);
  }
  printf("\n");
}
