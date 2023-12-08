#include<stdio.h>

main(){

/* 6- faça um programa que receba um vetor de 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.*/

//Variáveis
int vetor[10], maior, menor;

//Entrada dos dados
for(int i = 0; i < 10; i++){
    printf("Digite os numeros:");
    scanf("%d", &vetor[i]);
}

//Operações
maior = vetor[0];
menor = vetor[0];

for(int i =0; i < 10; i++){
    if(vetor[i] > maior){
        maior = vetor[i];
    }
    if(vetor[i] < menor){
        menor = vetor[i];
    }
}

//Saída
printf("\n O maior valor e %d e o menor %d", maior, menor);

}