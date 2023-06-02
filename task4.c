#include <stdio.h>
void changeMin(int arr[], int n) {
    int min1 = arr[0];
    int min2 = arr[1];
    int min1_index = 0;
    int min2_index = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
            min2_index = min1_index;
            min1_index = i;
        } else if (arr[i] < min2) {
            min2 = arr[i];
            min2_index = i;
        }
    }
    int buff = arr[min1_index];
    arr[min1_index] = arr[min2_index];
    arr[min2_index] = buff;
}

int main() {
    int arr[] = {6, 8, 1, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    changeMin(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}