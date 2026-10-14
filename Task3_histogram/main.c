#include <stdio.h>

#define N1 10001

int main() {
    
    int N;
    scanf("%d", &N);
    
    int a[N];
    int a1[N1] = {0};
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        a1[a[i]] ++;
    }
    for (int i = 0; i < N1; i++) {
        if (a1[i]) {
            printf("%d: %d\n", i, a1[i]);
        }
    }
}
