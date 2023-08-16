#include <stdio.h>

void selection_sort(int array[], int size);

int main() {
    int original_array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(original_array) / sizeof(original_array[0]);

    int sorted_array[size];
    for (int x = 0; x < size; x++) {
        sorted_array[x] = original_array[x];
    }

    selection_sort(sorted_array, size);

    for (int x = 0; x < size; x++) {
        printf("%d ", sorted_array[x]);
    }
    printf("\n");
}

void selection_sort(int array[], int size) {
    for (int x = 0; x < size; x++) {
        int min_index = x;

        for (int y = x + 1; y < size; y++) {
            if (array[y] < array[min_index]) {
                min_index = y;
            }
        }
        
        if (min_index != x) {
            int temp = array[x];
            array[x] = array[min_index];
            array[min_index] = temp;
        }
    }
}
