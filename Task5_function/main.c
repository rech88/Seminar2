#include <stdio.h>

#include "properties_of_the_function.h"

#define MAX_N 301

int main () {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i <= n; i++) {
        inValue[i] = 0;
        outValue[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        inValue[x]++;
        outValue[y]++;
    }

    if (!isfunction(n)) {
        printf("%d", 0);
    }
    else {
        int properties[5] = {1, alldefined(n), injective(n), surjective(n), biective(n)}; 
        for (int i = 0; i < 5; i++) {
            if (properties[i]) {
                printf("%d ", i+1);
            } 
        }
    }
}
