#include<stdio.h>

main(){

/* 3- Ler um conjunto de números reias, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

//Variáveis
int a[10], b[10];

//Entrada dos dados
for(int i = 0; i < 10; i++){
    printf("\n Digite 10 numeros:");
    scanf("%d", &a[i]);

    //Cálculo do quadrado dos números inseridos
    b[i] = a[i] * a[i];
}

//Saída dos dados
for(int i = 0; i < 10; i++){
    printf("\n A[%d] = %d. B[%d] = %d", i, a[i], i, b[i]);
}

}