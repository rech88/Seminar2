#include <stdio.h>

#include "wordCount.h"

#define N 10000

int main() {
    char str[N];
    scanf("%s", str);

    printf("%d", wordCount(str));
}