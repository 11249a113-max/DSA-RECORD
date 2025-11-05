int linearSearch(int arr[], int n, int key) {
    int i;  // declare here
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found\n", target);
    }
    return 0;
}
Output
Element 6 found at index 3.


1b. Binary search
#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  // To avoid overflow
        if (arr[mid] == target) {
            return mid;  // Found the target
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Not found
}
int main() {
    int arr[] = {2, 3, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found\n", target);
    }
    return 0;
}
Output
Element 6 found at index 3
