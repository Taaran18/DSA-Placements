// Write a Program to implement all sorting algorithms in Java.

import java.util.Scanner;

public class SortingAlgorithms {
    public static void bubbleSort(int[] arr) {
        int i, j, k, n, temp;
        n = arr.length;

        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    System.out.print("After pass " + (i + 1) + ": ");
                    for (k = 0; k < n; k++) {
                        System.out.print(arr[k] + " ");
                    }
                    System.out.println("\n");
                }
            }
        }
    }

    public static void selectionSort(int[] arr) {
        int n, i, j, min, temp;
        n = arr.length;

        for (i = 0; i < n - 1; i++) {
            min = i;
            for (j = i + 1; j < n; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    public static void insertionSort(int[] arr) {
        int n = arr.length;
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    public static void mergeSort(int[] arr) {

    }

    public static void quickSort(int[] arr) {

    }

    public static void heapSort(int[] arr) {

    }

    public static void radixSort(int[] arr) {

    }

    public static void countingSort(int[] arr) {

    }

    public static void main(String[] args) {
        int i, n, choice;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter size of array: ");
            n = sc.nextInt();
            int[] arr = new int[n];

            System.out.println("Enter " + n + " elements:");
            for (i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            System.out.println("Select Sorting Algorithm : ");
            System.out.println("1. Bubble Sort");
            System.out.println("2. Selection Sort");
            System.out.println("3. Insertion Sort");
            System.out.println("4. Merge Sort");
            System.out.println("5. Quick Sort");
            System.out.println("6. Heap Sort");
            System.out.println("7. Radix Sort");
            System.out.println("8. Counting Sort");

            System.out.println("Enter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    bubbleSort(arr);
                    break;
                case 2:
                    selectionSort(arr);
                    break;
                case 3:
                    insertionSort(arr);
                    break;
                case 4:
                    mergeSort(arr);
                    break;
                case 5:
                    quickSort(arr);
                    break;
                case 6:
                    heapSort(arr);
                    break;
                case 7:
                    radixSort(arr);
                    break;
                case 8:
                    countingSort(arr);
                    break;
                default:
                    System.out.println("Invalid Choice");
            }

            System.out.println("Unsorted Array:");
            for (i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println("\n");

            System.out.println("Sorted Array:");
            for (i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }

            sc.close();
        }
    }
}
