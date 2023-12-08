#include<stdio.h>

main(){

/* 11- Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.*/

//Variáveis
int vetor[10], num, soma = 0, contador = 0, contadorN = 0;

//Entrada dos dados
do{
    printf("\n Digite um numero qualquer:");
    scanf("%d", &num);
    if(num > 0){
        vetor[contador] = num;
        soma += num;
        contador++;
    }else{
        vetor[contador] = num;
        contadorN++;
        contador++;
    }

}while(contador < 10);

//Quantidade de números negativos
printf("\n A quantidade de numeros negativos e: %d", contadorN);

//Soma dos números positivos
printf("\n A soma dos numeros positivos do vetor e: %d", soma);

}