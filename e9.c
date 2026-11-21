#include <stdio.h>
int main(void) {
    int c; 
    while ((c = getchar ()) !=EOF) {
        if (c == '\t') {putchar('<'); putchar('\b'); putchar('-'); }
        else if (c == '\b') {putchar('<'); putchar ('\b'); putchar('-'); }
        else putchar(c)
    }
    return 0; 
}