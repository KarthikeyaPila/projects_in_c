#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include "./merge_sort.h"

void test(int* actual, int* expected, char* msg) {
    for(int i=0; i<3; i++){
        assert(actual[i] == expected[i]); 
    }
    printf("[PASS] %s", msg);
}

int main() {
    {
        int arr[] = {2, 4, 5};
        int expected[] = {2, 4, 5};
        test(merge_sort(3, arr), expected, "the array should not change order\n");
    }
    {
        int arr[] = {2, 5, 4};
        int expected[] = {2, 4, 5};
        test(merge_sort(3, arr), expected, "the array should order it correclty\n");
    }
    {
        int arr[] = {5, 4, 2};
        int expected[] = {2, 4, 5};
        test(merge_sort(3, arr), expected, "handles descending numbers correctly\n");
    }
    {
        int arr[] = {2, -1, 5};
        int expected[] = {-1, 2, 5};
        test(merge_sort(3, arr), expected, "handles negative numbers correctly\n");
    }
    {
        int arr[] = {5, -1, -1};
        int expected[] = {-1, -1, 5};
        test(merge_sort(3, arr), expected, "handle duplicate numbers correctly\n");
    }

    return 0;
}