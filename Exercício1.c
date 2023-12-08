#include<stdio.h>

main(){

/* 1- Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.*/

//Variáveis
int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

for(int i = 0; i < 6; i++){
    //somando somente alguns indices
    if(i == 0 || i == 1 || i == 5){
        soma += A[i];
    }
    
    //Atribuindo um novo valor a esta posição
    if(i == 4){
        A[i] = 100;
    }
    printf("\n %d", A[i]);
}

printf("\n\n %d", soma);

}