#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Erro, por favor digite um numero\n");
    }

    int numero[argc - 1];
    for (int i = 1; i < argc; i++) {
        numero[i - 1] = atoi(argv[i]); 
    }

    int quantidade = argc - 1;
    int soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += numero[i];
    }

    float media = (float)soma / quantidade;

    int maior = numero[0];
    int menor = numero[0];
    for (int i = 0; i < quantidade; i++) {
        if (numero[i] < menor){
            menor = numero[i];
        }
        if (numero[i] > maior) {
            maior = numero[i];
        }
    }

    for (int i = 0; i < quantidade - 1; i++) {
        for (int j = i + 1; j < quantidade; j++) {
            if (numero[i] > numero[j]) {
                int temp = numero[i];
                numero[i] = numero[j];
                numero[j] = temp;
            }
        }
    } 

    printf("A quantidade de numeros e %d \n", quantidade);

    printf("A soma dos numeros e: %d \n", soma);

    printf("A media dos numeros e: %.1f \n", media);

    printf("Menor numero: %d \n", menor);

    printf("Maior numero: %d \n", maior);

    printf("Numeros em ordem crescente: ");
    for (int i = 0; i < quantidade; i++) {
        printf("%d \n", numero[i]);
    }

    exit(0);
}