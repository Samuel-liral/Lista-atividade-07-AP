#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float numero = 5.75;
    int parte_inteira;
    float parte_fracionaria;

    frac(numero, &parte_inteira, &parte_fracionaria);

    printf("Numero: %.2f\nParte inteira: %d\nParte fracionaria: %.2f\n", numero, parte_inteira, parte_fracionaria);

    return 0;
}
