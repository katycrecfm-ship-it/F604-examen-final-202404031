#include <stdio.h>
#define MAXLINE 1000
void reverse(char s[]) {
    int i=0. j; 
    while (s[i] != '\0') i++; 
    for (j=0, i = i-1; j < i; j++, i--) {
        char t=s[j]; s[j] = s[i]; s[i] = t; 
    }
}

int main(void) {
    int c, i =0; 
    char line[MAXLINE];
    while ((c= getchar()) !=EOF) {
        if (c == '\n') {line [i] = '\0'; reverse(line); printf("%s\n", line); i = 0;}
        else {if (i < MAXLINE - 1) {line [i] = c; i++; }}
    }
    if (i > 0) {line [i] = '\0'; reverse(line); printf("%s\n", line);}
    return 0; 
}