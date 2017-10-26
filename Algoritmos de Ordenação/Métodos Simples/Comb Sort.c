#include<stdio.h>

void combSort(int *A, int tam);

int main(int argc, char const *argv[]) {
  int i;
  int A[20] = {3,19,0,1,6,4,8,5,3,66,5,1,2,65,14,11,13,75,3,18};
  combSort(A, 20);
  for(i=0; i<20; i++){
    printf("%d \n", A[i]);
  }
  return 0;
}

void combSort(int *A, int tam){
  int i, j, aux, intervalo, trocado = 1;

	intervalo = tam;
	while (intervalo > 1 || trocado == 1){
		intervalo = (int) intervalo/1.3;
		if (intervalo == 9 || intervalo == 10) intervalo = 11;
		if (intervalo < 1) intervalo = 1;
		trocado = 0;
		for (i = 0, j = intervalo; j < tam; i++, j++){
			if (A[i] > A[j]){
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
				trocado = 1;
			}
		}
	}
}
