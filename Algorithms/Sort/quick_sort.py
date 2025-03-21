import random


# Pythonic swap function
def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

# Partition function with proper handling of low and high indices


def partition(arr, low, high):
    # Use the last element as the pivot
    pivot_value = arr[high]
    i = low - 1  # Index for the smaller element

    for j in range(low, high):
        if arr[j] < pivot_value:
            i += 1
            swap(arr, i, j)

    # Place the pivot in its correct position
    swap(arr, i + 1, high)
    return i + 1

# Quick Sort function


def quick_sort(arr, low, high):
    if low < high:
        # Partition the array and get the pivot index
        middle = partition(arr, low, high)

        # Recursively sort the subarrays
        quick_sort(arr, low, middle - 1)  # Left of pivot
        quick_sort(arr, middle + 1, high)  # Right of pivot


# List comprehension to generate 100 random numbers in the range of 1 to 100
arr = [random.randint(1, 10**3) for x in range(10**1)]

print(f"Before quick sort \n{arr}\n")

quick_sort(arr, 0, len(arr) - 1)

print(f"After quick sort:\n{arr}")
