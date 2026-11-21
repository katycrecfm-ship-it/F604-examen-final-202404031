#include <stdio.h>
#define MAXLEN 100
int main(void) {
    int c, i, j, len = 0, in_word = 0;
    int counts[MAXLEN + 1] = {0};
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (in_word) {
                if (len > MAXLEN) len = MAXLEN;
                counts[len]++; len = 0; in_word = 0;
            }
        } else { in_word = 1; len++; }
    }
     if (in_word) {
        if (len > MAXLEN) len = MAXLEN;
        counts[len]++;
    }
    for (i = 1; i <= MAXLEN; i++) {
        if (counts[i] > 0) {
            printf("%d | ", i);
            for (j = 0; j < counts[i]; j++) putchar('*');
            printf(" %d\n", counts[i]);
        }
    }
    return 0;
}
