#include <stdio.h>
#include <conio.h>

int main() {
    int vetor[5];
    int maior, menor;
    printf("Digide 5 numeros inteiros:");
    for (int i = 1; i < 6; ++i){
    printf(" A[%d]: ", i);
    scanf("%d", &vetor[i]);
    }
    maior = vetor[1]; 
    menor = vetor[1];
    for (int i = 1; i < 6; ++i){
    if (vetor[i] > maior) maior = vetor[i];
    if (vetor[i] < menor) menor = vetor[i];
    } 
    printf("\n\n Maior: %d\n", maior);
    printf(" Menor: %d", menor);
    return 0;
}

