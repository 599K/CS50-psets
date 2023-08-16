#include <stdio.h>

void bubble_sort(int arrayp[], int size);

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    int sorted_array[size];
    for (int i = 0; i < size; i++) {
        sorted_array[i] = array[i];
    }

    bubble_sort(sorted_array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", sorted_array[i]);
    }
}

void bubble_sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

