#include <stdio.h>

#include "sorting.h"

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int* p = a;
    sort(p, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    } 
}