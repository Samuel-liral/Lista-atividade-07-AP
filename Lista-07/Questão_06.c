#include <stdio.h>

int substring(const char *str1, const char *str2) {
    while (*str1) {
        const char *p1 = str1;
        const char *p2 = str2;

        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p2) return 1; 
        str1++;
    }
    return 0; 
}

int main() {
    const char *str1 = "Hello, world!";
    const char *str2 = "world";

    if (substring(str1, str2)) {
        printf("'%s' ocorre dentro de '%s'.\n", str2, str1);
    } else {
        printf("'%s' não ocorre dentro de '%s'.\n", str2, str1);
    }

    return 0;
}
