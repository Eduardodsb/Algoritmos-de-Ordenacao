#include<stdio.h>

void inserionSort(int *A, int tam);

int main(int argc, char const *argv[]) {
  int i;
  int A[20] = {3,19,0,1,6,4,8,5,3,66,5,1,2,65,14,11,13,75,3,18};
  inserionSort(A, 20);
  for(i=0; i<20; i++){
    printf("%d \n", A[i]);
  }
  return 0;
}

void inserionSort(int *A, int tam){
  int i, j, tmp;
    for(i=1; i<tam; i++) {/*Começo olhando pra 2° posição (1)*/
          j = i;
          while (j > 0 && A[j - 1] > A[j]) {/*Volto comparando e trocando até chegar a 1° posição (0) */
                tmp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp;
                j--;
          }
    }
}
