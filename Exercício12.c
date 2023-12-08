#include<stdio.h>

main(){

/* 12- fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a média dos valores.*/

//Variáveis
int vetor[5], num, maior = 0, menor = 1, media, soma = 0;

//Entrada dos dados e operações
for(int i = 0; i < 5; i++){
    printf("\n Digite um numero:");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    } else if(num < menor){
        menor = num;
    }
    vetor[i] = num;

}

for(int i = 0; i < 5; i++){
    soma+= vetor[i];
    media = soma / 5;
}

//Saída
for(int i = 0; i < 5; i++){
    printf("\n %d", vetor[i]);
}
printf("\n A media dos vetores e: %d", media);
printf("\n O maior vetor e: %d", maior);
printf("\n O menor vetor e: %d", menor);

}