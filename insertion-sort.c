#include <stdio.h>

int main() {
  int arr[10] = {7,6,4,1,3,2,5,9,0,8};
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++) 
    printf("%d ", *(arr + i));
  printf("\n");
  for (int i = 0; i < len; i++) {
    int temp = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  for (int i = 0; i < len; i++) 
    printf("%d ", *(arr + i));
  
  return 0;
}
