#include<stdio.h>

main(){

/*13- fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/

//Variáveis
int vetor[5], num, posicaoM = 0, posicaom = 0, maior = 0, menor = 1;

//Entrada dos dados
for(int i = 0; i < 5; i++){
    printf("\n Digite um numero qualquer:");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    } else if(num < menor){
        menor = num;
    }
     vetor[i] = num;
}

for(int i = 0; i < 5; i++){
    if(vetor[i] == maior){
    break;
    }
    posicaoM ++;
}

for(int i = 0; i < 5; i++){
    if(vetor[i] == menor){
        break;
    }
    posicaom ++;
}

printf("\n A posicao do maior vetor e: %d", posicaoM);
printf("\n A posicao do menor vetor e: %d", posicaom);

}