#include<stdio.h>

main(){

/* 10- Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.*/

//Variáveis
int notas[15], soma = 0, media;

//Entrada dos dados
for(int i = 0; i < 15; i++){
    printf("\n Digite a nota dos alunos:");
    scanf("%d", &notas[i]);
}

for(int i = 0; i < 15; i++){
    soma+= notas[i];
    media = soma / 15;
}

printf("\n A media geral foi: %d", media);

}