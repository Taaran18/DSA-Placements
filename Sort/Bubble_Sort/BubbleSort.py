# Performing Bubble Sort in C

# Initialize array size
n = int(input("Enter size of array: "))

# Initialize array
arr = [0] * n

# Input elements
for i in range(n):
    arr[i] = int(input("Enter element {}: ".format(i + 1)))

# Print unsorted array
print("\nUnsorted Array: ", end="")
for i in range(n):
    print(arr[i], end=" ")
print("\n")

# Bubble sort
for i in range(n - 1):
    for j in range(n - i - 1):
        
        # Compare adjacent elements
        if arr[j] > arr[j + 1]:
            
            # Swap elements if greater
            temp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = temp
            
            # Print array after each pass
            print("Array after pass {}: ".format(i + 1), end="")
            for k in range(n):
                print(arr[k], end=" ")
            print()

# Print sorted array
print("\nSorted Array: ", end="")
for i in range(n):
    print(arr[i], end=" ")
print()
