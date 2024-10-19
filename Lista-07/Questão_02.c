#include <stdio.h>

int main() {
    int a = 10, b = 20;

    if (&a > &b) {
        printf("Endereco maior: %p (a)\n", (void*)&a);
    } else {
        printf("Endereco maior: %p (b)\n", (void*)&b);
    }

    return 0;
}
