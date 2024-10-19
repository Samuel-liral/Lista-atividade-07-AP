#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A = 5, B = 10;

    printf("Antes da troca: A = %d, B = %d\n", A, B);
    troca(&A, &B);
    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}
