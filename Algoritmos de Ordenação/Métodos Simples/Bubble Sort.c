#include<stdio.h>

void bubbleSort(int *A, int tam);

int main(int argc, char const *argv[]) {
  int i;
  int A[20] = {3,19,0,1,6,4,8,5,3,66,5,1,2,65,14,11,13,75,3,18};
  bubbleSort(A, 20);
  for(i=0; i<20; i++){
    printf("%d \n", A[i]);
  }
  return 0;
}

void bubbleSort(int *A, int tam){
  int i, j, temp;
  for(i=0; i<tam-1; i++){
    for(j=0; j<tam-i-1; j++){
      if(A[j]>A[j+1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}
