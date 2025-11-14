#include <stdio.h>
#include <assert.h>
#include "calculator.c"


int main() {
    printf("Running add tests\n");
    assert(add(5,4) == 9);
    assert(add(0,0) == 0);
    assert(add(5,-7) == -2);
    assert(add(100,100) == 200);
    printf("Running subtract tests\n");
    assert(subtract(5,4) == 1);
    printf("Running multiply tests\n");
    assert(multiply(5,4) == 20);
    printf("ALL TESTS PASSED SUCCESSFULLY\n");
    return 0;
}