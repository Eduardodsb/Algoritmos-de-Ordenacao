#include<stdio.h>

void selectionSort(int *A, int tam);

int main(int argc, char const *argv[]) {
  int i;
  int A[20] = {3,19,0,1,6,4,8,5,3,66,5,1,2,65,14,11,13,75,3,18};
  selectionSort(A, 20);
  for(i=0; i<20; i++){
    printf("%d \n", A[i]);
  }
  return 0;
}

void selectionSort(int *A, int tam){
  int i, j, menor, aux;

  for (i = 0; i < (tam - 1); i++) {
    menor = i; /*O mínimo é o primeiro número não ordenado ainda*/
    for (j = i+1; j < tam; j++) {
      if (A[j] < A[menor]) {  /* Caso tenha algum número menor ele faz a troca do mínimo*/
        menor = j;
      }
    }
    if (i != menor) {/*Se o mínimo for diferente do primeiro número não ordenado ele faz a troca para ordena-los*/
      aux = A[i];
      A[i] = A[menor];
      A[menor] = aux;
    }
  }
}
