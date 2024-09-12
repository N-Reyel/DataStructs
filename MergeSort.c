#include <stdio.h>

void intercala(int array[], int inicio, int fim, int meio);

void merge(int array[], int inicio, int fim);

int main(){
    int array[] = {5,4,2,8,3};
    int tamanho = sizeof(array)/sizeof(array[0])-1;

    for(int i=0;i<=tamanho;i++){
    printf("%d ", array[i]);
    }
    printf("\n");

    merge(array,0,tamanho);

    for(int i=0;i<=tamanho;i++){
    printf("%d ", array[i]);
    }
    printf("\n");
    


    return 0;
}

void intercala(int array[], int inicio, int fim, int meio){
    int poslivre, inicio_vetor1, inicio_vetor2,i;
    int aux[10];
    inicio_vetor1 = inicio;
    inicio_vetor2 = meio +1;
    poslivre = inicio;

    while(inicio_vetor1 <= meio && inicio_vetor2 <= fim){
        if (array[inicio_vetor1] <= array[inicio_vetor2]){
            aux[poslivre] = array[inicio_vetor1];
            inicio_vetor1 = inicio_vetor1 +1;
        }
        else{
            aux[poslivre] = array[inicio_vetor2];
            inicio_vetor2 = inicio_vetor2 +1;
        }
    poslivre = poslivre +1;
    }
    for(i = inicio_vetor1;i<=meio;i++){
        aux[poslivre] = array[i];
        poslivre = poslivre +1;
    }
    for(i = inicio_vetor2;i<=fim;i++){
        aux[poslivre] = array[i];
        poslivre = poslivre +1;
    }
    for(i = inicio;i<=fim;i++){
        array[i]=aux[i];
    }
}

void merge(int array[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/2;
        merge(array,inicio,meio);
        merge(array,meio+1,fim);
        intercala(array,inicio,fim,meio); 
    }
}
