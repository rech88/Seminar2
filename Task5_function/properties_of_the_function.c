#include "properties_of_the_function.h"

int inValue[MAX_N];
int outValue[MAX_N];

int isfunction(int n) {
    for (int i = 1; i <= n; i++) {
        if (inValue[i] > 1) {
            return 0;
        }
    }
    return 1;
}

int alldefined(int n) {
    for (int i = 1; i <= n; i++) {
        if (inValue[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int injective(int n) {
    for (int i = 1; i <= n; i++) {
        if (outValue[i] > 1) {
            return 0;
        }
    }
    return 1;
}

int surjective(int n) {
    for (int i = 1; i <= n; i++) {
        if (outValue[i] == 0) {
            return 0;
        }
    }
    return 1;
} 

int biective(int n) {
    if (injective(n) && surjective(n)) {
        return 1;
    }
    return 0;
}
