# include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int elements[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &elements[i]);
    }

    int sumK;
    for (int i = 0; i < N; i++) {
        sumK = 0;
        for (int k = i; k < N; k += i+1) {
            sumK += elements[k];
        }
        printf("%d\n", sumK);
    }
}
