#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char caractere = 'A';

    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Char: %c\n", inteiro, real, caractere);

    *p_inteiro = 20;
    *p_real = 10.5;
    *p_caractere = 'B';

    printf("Depois a modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Char: %c\n", inteiro, real, caractere);

    return 0;
}
