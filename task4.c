#include <stdio.h>

void changeMax(int arr[], int n) {
    int max1 = 0, max2 = -1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max1]) {
            max2 = max1;
            max1 = i;
        } 
        else if ((arr[i] > arr[max2]) || (max2 == -1 )) {
            max2 = i;
        }
    }

    if (max2 != -1) {
        int temp = arr[max1];
        arr[max1] = arr[max2];
        arr[max2] = temp;
    }
}

int main() {
    int arr[] = {3, 2, 1, 4, 9};
    int n = 5;
    changeMax(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
