// Performing Bubble Sort in C

package Bubble_Sort;

import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {

        try (
            // Initialize scanner
            Scanner scanner = new Scanner(System.in)) {
            // Input array size
            System.out.print("Enter size of array: ");
            int n = scanner.nextInt();

            // Initialize array
            int arr[] = new int[n];

            // Input array elements
            System.out.println("Enter " + n + " elements:");
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            // Print unsorted array
            System.out.print("Unsorted Array: ");
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println("\n");

            // Bubble sort begins
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {

                    // Compare and swap if
                    if (arr[j] > arr[j + 1]) {

                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;

                        // Print array after each swap
                        System.out.print("After pass " + (i + 1) + ": ");
                        for (int k = 0; k < n; k++) {
                            System.out.print(arr[k] + " ");
                        }
                        System.out.println();
                    }
                }
            }

            // Print sorted array
            System.out.println("\n");
            System.out.print("Sorted Array: ");
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
        }
    }
}