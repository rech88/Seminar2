#include <stdio.h>

#include "sorting.h"

void sort(int* p, int len) {
    
    int el;
    int arr[len];
    arr[0] = p[0];
    int t;

    for (int i = 1; i < len; i++) {
   
        el = p[i];

        for (int j = 0; j < i; j++) {

            if (el < arr[j]) {
                t = arr[j];
                arr[j] = el;
                el = t;
            }
        }

        arr[i] = el;
    }

    for (int i = 0; i < len; i++) {
        p[i] = arr[i];
    }
}
