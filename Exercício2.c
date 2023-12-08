#include<stdio.h>

main(){

/* 2- Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

//Variáveis
int vetor[6];

//Entrada dos dados
for(int i = 0; i < 6; i++){
    printf("\n Digite um numero qualquer:");
    scanf("%d", &vetor[i]);

}

//Saída dos dados
for(int i = 0; i < 6; i++){
    printf("\n %d", vetor[i]);
}

}