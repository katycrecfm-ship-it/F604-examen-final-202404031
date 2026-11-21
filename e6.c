#include <stdio.h>
#define MAXLINE 1000
int main(void) {
    int c, i = 0; 
    char line [MAXLINE]; 
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (i > 80) {line[i] = '\0'; printf("%s\n", line); }
            i = 0
        } else {
            if (i < MAXLINE -1) {line[i] = c; i++; }
        }
    }
    if (i > 80) {line[i] = '\0'; printf("%s\n", line); }
    return 0; 
}