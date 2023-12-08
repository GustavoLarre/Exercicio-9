#include<stdio.h>

main(){

/* 7- Escreva um programa que leia os numeros inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

//Variáveis
int vetor[10], maior, posicao;

//Entrada dos dados
for(int i = 0; i < 10; i++){
    printf("\n Digites os numeros:");
    scanf("%d", &vetor[i]);
}

//Operações
maior = vetor[0];

for(int i = 0; i < 10; i++){
    printf("\n %d", vetor[i]);

    if(vetor[i] > maior){
        maior = vetor[i];
        posicao = i;
    }
}

//Saída
printf("\n O maior valor e %d. E esta na posicao %d", maior, posicao);

}