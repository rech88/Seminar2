#include <assert.h>
#include <stdio.h>

#include "wordCount.h"

void wordCount_test() {
    assert(wordCount(".......") == 0);
    assert(wordCount("..hy...fgdB..pp......") == 3);
    assert(wordCount("AaAa") == 1);
    assert(wordCount("..........A") == 1);
    assert(wordCount("b.d.b.d.b.d") == 6);
    assert(wordCount("") == 0);
}

int main()
{
    wordCount_test();

    printf("All tests completed!");
    return 0;
}
