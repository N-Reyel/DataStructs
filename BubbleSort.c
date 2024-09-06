#include <stdio.h>

void Bubble(int array[],int tamanho);
void Bubble2(int array[],int tamanho);
void Bubble3(int array[],int tamanho);

int main(){
    int array[] = {5,3,4,2,8,9};
    int tamanho = (sizeof(array)/sizeof(array[0]))-1;

    for(int i=0; i<=tamanho;i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    Bubble3(array,tamanho);
    
    for(int i=0;i<=tamanho;i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void Bubble(int array[],int tamanho){
    int aux;
    for(int j=0;j<=tamanho;j++){
        for(int i=0;i<=tamanho-1;i++){
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
    }
}

void Bubble2(int array[],int tamanho){
    int aux;
    for(int j=1;j<=tamanho;j++){
        for(int i=tamanho;i>=j;i--){
            if(array[i] < array[i-1]){
                aux = array[i];
                array[i] = array[i-1];
                array[i-1] = aux;
            }
        }
    }
}

void Bubble3(int array[],int tamanho){
    int aux;
    int n = 1;
    int troca = 1;
    while(n <=tamanho && troca ==1){
        troca = 0;
        for(int i = 0;i<=tamanho;i++){
            if(array[i] < array[i+1]){
                troca = 1;
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        n = n + 1;
    }
}

