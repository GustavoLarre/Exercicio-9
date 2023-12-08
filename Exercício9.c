#include<stdio.h>

main(){

/* 9- Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

//Variáveis
int vetor[6], num, pares = 0;

//Entrada dos dados
do{
    printf("\n Digite um numero par:");
    scanf("%d", &num);

    if(num % 2 == 0){
        vetor[pares] = num;
        pares++;
    }else{
        printf("Numero invalido. Por favor digete outro numero.");
    }

}while(pares < 5);

//Ordem em que os números foram digitados
for(int i = 0; i < 5; i++){
    printf("\n %d", vetor[i]);
}

printf("\n");

//Ordem inversa
for(int i = 4; i >= 0; i --){
    printf("\n %d", vetor[i]);
}

}