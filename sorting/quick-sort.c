#include <stdio.h>

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;
    
    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
    return i;
}

void quickSort(int arr[], int start, int end) {
    if (end <= start) return; // Base case
    
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main() {
    int arr[10] = {4, 3, 1, 2, 5, 6, 0, 8, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, len - 1);
    
    for (int i = 0; i < len; i++) {
        printf("%d", *(arr + i));
    }
    return 0;
}




