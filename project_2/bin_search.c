#include <stdio.h>

// This function searches a sorted array with no duplicates (arr), 
// and returns the index of the integer a, using binary search,
// returns -1 if the int is not found
int binary_search(int a, int *arr, int size) {
    int lo = 0;
    int hi = size;
    while (lo != hi) {
        // setting check to (lo + hi) / 2 is in theory the same, but runs into
        // overflow issues, imagine if hi is close to max int.
        int check = lo + ((hi - lo) / 2);
        if (arr[check] == a) {
            return check;
        }
        else if (arr[check] < a)
        {
            lo = check + 1;
        }
        else {
            hi = check;
        }
        
    }
    return -1;
}