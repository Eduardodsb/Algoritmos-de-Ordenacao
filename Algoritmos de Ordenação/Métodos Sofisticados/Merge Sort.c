#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int *vetor, int comeco, int meio, int fim);
void mergeSort(int *vetor, int comeco, int fim);

int main(int argc, char const *argv[]) {
int i;
int A[20] = {3,19,0,1,6,4,8,5,3,66,5,1,2,65,14,11,13,75,3,18};
    for(i=0; i<20; i++){
        printf("%d ", A[i]);
    }
    puts("");
    mergeSort(A,0,19);
    for(i=0; i<20; i++){
        printf("%d ", A[i]);
    }
    return 0;
}

void mergeSort(int *vetor, int comeco, int fim){
int meio;
    if(comeco < fim){
        meio = (comeco + fim)/2;
        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }

}

void merge(int *vetor, int comeco, int meio, int fim){
int metade1 = comeco, metade2 = meio+1;
int *vetorOrdenado, comecoOrdenado = 0, *temp;

    vetorOrdenado = (int*) malloc(sizeof(int)*(fim-comeco+1));

    while(metade1 <= meio && metade2 <= fim){ /*Compoe o vetorOrdenado olhando termo a termo das duas metades do vetor, que se deseja ordenar.*/
        if(vetor[metade1] < vetor[metade2]){
            vetorOrdenado[comecoOrdenado] = vetor[metade1];
            metade1++;
        }else{
            vetorOrdenado[comecoOrdenado] = vetor[metade2];
            metade2++;
        }
        comecoOrdenado++;
    }

    while(metade1 <= meio){ /*Pega os termos restantes da primeira metade do vetor.*/
        vetorOrdenado[comecoOrdenado] = vetor[metade1];
        metade1++;
        comecoOrdenado++;
    }

    while(metade2 <= fim){ /*Pega os termos restantes da segunda metade do vetor.*/
        vetorOrdenado[comecoOrdenado] = vetor[metade2];
        metade2++;
        comecoOrdenado++;
    }

    /*Atribui ao vetor original o endereço que contem o vetor ordenado.*/

    for(comecoOrdenado = comeco; comecoOrdenado <= fim; comecoOrdenado++){ 
        vetor[comecoOrdenado] = vetorOrdenado[comecoOrdenado-comeco];
    }

    free(vetorOrdenado);
}