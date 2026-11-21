#include <stdio.h>
int main(void) {
    char name[100]
    printf("Ingrese un nombre\n");
    if (scanf("%99s", name) == 1) {
        printf("Hola %s\n", name);
        return 0;
    }
}