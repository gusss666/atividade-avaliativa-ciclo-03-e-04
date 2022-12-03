    //          INSERTION SORT em ordem crescente

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) { //valor inicial de tamanho 1 que incrementa +1 a cada loop
        key = arr[i];    //recebe o valor contido na posição [i] do vetor 
        j = i - 1;
        while (j >= 0 && arr[j] > key) {  //nesse laço será inteirada a condição do valor atual de j, onde:
        //ENQUANTO j maior/igual a 0 e arr[j](posição de j no vetor) maior que Key(posição do valor de [i])
            arr[j + 1] = arr[j]; //a posição +1 do vetor receberá o valor armazenado na posição anterior
            j = j - 1;    // j volta a ser incrementado em -1
        }
          //quando o valor de j é menor que 0, o programa não entra  no while e executa o trecho do código abaixo:
        arr[j + 1] = key;  //o valor armazenado em Key é alocado na posição 0
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)  //incrementa em +1 o tamanho do vetor a cada loop
        printf("%d ", arr[i]);  
    printf("\n");
}

void main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]); //este operador permite saber o número de bytes ocupado. size = 5 (itens) /(dividido)  2(12 tem 2 digitos ) , size = 2
    insertionSort(arr, size);
    printArray(arr, size);
}
