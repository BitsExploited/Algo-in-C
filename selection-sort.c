#include <stdio.h>

int main() {
    int arr[10] = {9,8,6,7,5,4,2,3,1,0};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int i = 0; i < len; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}
