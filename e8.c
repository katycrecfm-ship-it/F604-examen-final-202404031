#include <stdio.h>
int main(void) {
    int c, in_space = 0; 
    while ((c = getchar()) != EOF) {
        if (c = ' ') {
            if(!in_space) {putchar(c); in_space = 1; }
        } else {
            putchar(c); in_space = 0; 
        }
    }
    return =0; 
}