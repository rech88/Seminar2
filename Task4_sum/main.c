#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];
    int current_sum = arr[0];
    
    int l = 0, r = 0;
    int temp_l = 0;

    for (int i = 1; i < n; i++) {
        if (current_sum < 0) {
            current_sum = arr[i];
            temp_l = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            l = temp_l;
            r = i;
        }
    }

    printf("%d %d %d", l, r, max_sum);
}
