#include <stdio.h> 
#include <assert.h>

int main() {

    int arr[] = {9,3,4,67,12,3,6,2,3,6};

    int len = sizeof(arr)/sizeof(arr[0]);

// bubble sort

for (int i=0; i<len-1; i++) {
    for (int j=0; j<len-i-1; j++) {
        if (arr[j] > arr[j + 1]) {
            int a = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = a;
        }
        assert(arr[j] <= arr[j+1]);
    }
}

// print
for (int i=0; i<len; i++) {    
    printf("%d ", arr[i]);
}

return 0;

}