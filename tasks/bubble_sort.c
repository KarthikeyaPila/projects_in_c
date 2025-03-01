int* bubble_sort(int len, int* arr) {
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    return arr;
}
