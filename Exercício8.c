#include<stdio.h>

main(){

/* 8- Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa*/

//Variáveis
int vetor[6];

//Entrada dos dados
for(int i = 0; i < 6; i++){
    printf("Digite os numeros:");
    scanf("%d", &vetor[i]);
}

//Operações e saída
for(int i = 5; i >= 0; i--){
    printf("\n %d", vetor[i]);
}

}