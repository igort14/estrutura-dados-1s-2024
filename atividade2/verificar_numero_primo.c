#include <stdio.h>
#include <stdlib.h>

int verificarNumeroPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Erro: Por favor, forneça um número como argumento.\n");
        return 1;
    }

    int numero = atoi(argv[1]);
    int Primo = verificarNumeroPrimo(numero);
    printf("%s\n", Primo ? "true" : "false");

    return 0;
}
