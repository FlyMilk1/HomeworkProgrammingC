#include <stdio.h>

#define DEBUG

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sumElementsAtDivisibleBy3(int arr[], int size) {
    int sum = 0;

    printf("Sum of elements at indexes divisible by 3: ");

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
#ifdef DEBUG
            printf("%d ", arr[i]);
#endif
        }
    }
    
    printf("= %d\n", sum);
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 6, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
#endif

    sumElementsAtDivisibleBy3(arr, size);

    return 0;
}
