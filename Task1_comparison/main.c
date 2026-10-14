#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int nums[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    int smaller_elements[N];
    smaller_elements[N-1] = 0;

    for (int i = 0; i < N-1; i++) {
        smaller_elements[i] = 0;
        
        for (int j = i+1; j < N; j++) {
            if (nums[i] > nums[j]) {
                smaller_elements[i]++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", smaller_elements[i]);
    }
}