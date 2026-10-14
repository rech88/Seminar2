#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    } 

    int max_sum = -10001;

    int l, r = 0;
    int summ = 0;
    for (int i = 0; i < N; i++) {
        summ = 0;
        for (int j = i; j < N; j++) {
            summ += arr[j];
            if (max_sum < summ) {
                max_sum = summ;
                l = i;
                r = j;
            }
        }
    }
    printf("%d %d %d", l, r, max_sum);
}