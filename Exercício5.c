#include<stdio.h>

main(){

/* 5- Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

//Variáveis
int vetor[10], pares = 0;

//Entrada dos dados
for(int i = 0; i < 10; i++){
    printf("Digite os numeros:");
    scanf("%d", &vetor[i]);
    if(vetor[i] % 2 == 0){
        pares++;
    }
}

//Saída
printf("\n \n A quantidade de pares existentes no vetor e: %d", pares);

}