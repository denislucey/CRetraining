#include <stdio.h>
#include <assert.h>
#include "bin_search.c"


int main() {
    printf("Running binary search tests\n");
    int test1[] = {0,1,2,3,4};
    for (int i = 0; i < 5; i++) {
        assert(binary_search(i,test1,5) == i);
    }
    assert(binary_search(6,test1,5) == -1);

    int test2[] = {0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 10; i++) {
        assert(binary_search(i,test2,10) == i);
    }
    
    int test3[] = {0,2,4,6,8,10,12,14,16,18};
    for (int i = 0; i < 18; i++) {
        if (i % 2 == 0) {
            assert(binary_search(i,test3,10)==(i/2));
        }
        else
        {
            assert(binary_search(i,test3,10)==-1);
        }
        
        
    }

    int test4[] = {8};
    assert(binary_search(8,test4,1) == 0);
    assert(binary_search(7,test4,1) == -1);
    assert(binary_search(9,test4,1) == -1);
     
    printf("ALL TESTS PASSED SUCCESSFULLY\n");
    return 0;
}