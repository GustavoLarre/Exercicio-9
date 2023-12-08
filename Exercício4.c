#include<stdio.h>

main(){

/* 4- Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores x e y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições x e y.*/

//Variáveis
int vetor[8], x, y, soma = 0;

//Entrada e saída dos dados
for(int i = 0; i < 8; i++){
    printf("Digite os oito numeros:");
    scanf("%d", &vetor[i]);
}

do{
    printf("\n Digite os valores para x e y (entre 0 e 7):");
    scanf("%d %d", &x, &y);
    if((x >= 0 && x < 8) && (y >= 0 && y < 7)){
        for(int i = 0; i < 8; i++){
            if(i == x){
                soma += vetor[i];
            }
            if(y == i){
            soma += vetor[i];
            }
        }
    } else{
        printf("Valores de x e y invalidos");
    }

}while(x < 0 || x > 7 && y < 0 || y > 7);

printf("Soma os valores das posicoes %d e %d = %d", x, y, soma);

}