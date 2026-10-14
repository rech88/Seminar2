#include "wordCount.h"

int wordCount(char str[]) {
    int words = 0;
    int i = 0;
    char start = str[i];

    while (start != 0) {
        
        while (!('a' <= start && start <= 'z') && !('A' <= start && start <= 'Z') && (start != 0)) {
            start = str[++i];
        }

        if (start != 0) {
            words++;
        }
        
        while (('a' <= start && start <= 'z') || ('A' <= start && start <= 'Z') && (start != 0)) {
            start = str[++i];
        }
    }

    return(words);
}