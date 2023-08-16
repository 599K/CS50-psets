	#include <stdio.h>
	// Function to merge two sorted subarrays into one sorted array
	void merge(int arr[], int left, int mid, int right) {
	    int n1 = mid - left + 1;
	    int n2 = right - mid;
	    // Create temporary arrays to store the two halves
	    int leftArr[n1], rightArr[n2];
	    // Copy data to temporary arrays
	    for (int i = 0; i < n1; i++)
	        leftArr[i] = arr[left + i];
	    for (int j = 0; j < n2; j++)
	        rightArr[j] = arr[mid + 1 + j];
	    // Merge the two temporary arrays back into arr[]
	    int i = 0; // Initial index of left subarray
	    int j = 0; // Initial index of right subarray
	    int k = left; // Initial index of merged subarray
	    while (i < n1 && j < n2) {
	        if (leftArr[i] <= rightArr[j]) {
	            arr[k] = leftArr[i];
	            i++;
	        } else {
	            arr[k] = rightArr[j];
	            j++;
	        }
	        k++;
	    }
	    // Copy the remaining elements of leftArr[], if any
	    while (i < n1) {
	        arr[k] = leftArr[i];
	        i++;
	        k++;
	    }
	    // Copy the remaining elements of rightArr[], if any
	    while (j < n2) {
	        arr[k] = rightArr[j];
	        j++;
	        k++;
	    }
	}
	// Function to perform Merge Sort
	void mergeSort(int arr[], int left, int right) {
	    if (left < right) {
	        // Find the middle point to divide the array into two halves
	        int mid = left + (right - left) / 2;
	        // Sort the left half
	        mergeSort(arr, left, mid);
	        // Sort the right half
	        mergeSort(arr, mid + 1, right);
	        // Merge the sorted halves
	        merge(arr, left, mid, right);
	    }
	}
	// Function to print an array
	void printArray(int arr[], int size) {
	    for (int i = 0; i < size; i++) {
	        printf("%d ", arr[i]);
	    }
	    printf("\n");
	}
	int main() {
	    int arr[] = {12, 11, 13, 5, 6, 7};
	    int n = sizeof(arr) / sizeof(arr[0]);
	    mergeSort(arr, 0, n - 1);
	    printf("Sorted array: \n");
	    printArray(arr, n);
	    return 0;
}