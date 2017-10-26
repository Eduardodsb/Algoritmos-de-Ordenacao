#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quickSort(int *A, int inicio, int fim);
int particiona(int *A, int inicio, int fim);

int main(int argc, char const *argv[]) {
  int i;
  int A[20] = {3,19,0,1,6,4,8,5,3,66,5,1,2,65,14,11,13,75,3,18};
  quickSort(A,0,20);
  for(i=0; i<20; i++){
    printf("%d \n", A[i]);
  }
  return 0;
}

void quickSort(int *A, int inicio, int fim){
  int ppivot, pivot, pos;
  if(fim-inicio>1){
    ppivot = inicio;
    pivot = A[ppivot];
    A[ppivot] = A[inicio];
    A[inicio] = pivot;
    pos = particiona(A,inicio,fim);
    quickSort(A,inicio,pos);
    quickSort(A,pos+1,fim);
  }
}

int particiona(int *A, int inicio, int fim){
  int pivot, i, j, temp;
  pivot = A[inicio];
  i=inicio+1;
  j=fim-1;
  while(j>i){
    while((i<fim)&&(A[i]<pivot)){
      i++;
    }
    while((j>inicio)&&(A[j]>pivot)){
      j--;
    }
    if(i<j){
      temp = A[j];
      A[j] =  A[i];
      A[i] = temp;
    }
  }
  A[inicio]=A[j];
  A[j]=pivot;
  return j;
}
