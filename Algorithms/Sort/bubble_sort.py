
def bubble_sort(arr):
    n = len(arr)
    for passnum in range(n - 1, 0, -1):  # Loop for each pass (n-1 passes)
        swapped = False
        for i in range(passnum):  # Loop through unsorted part of the array
            if arr[i] > arr[i + 1]:
                # Swap using tuple unpacking
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                swapped = True
        if not swapped:  # Exit early if no swaps occurred
            break  # Array is sorted, no need for further passes


arr = [64, 34, 25, 12, 22, 11, 90]

print(arr)

bubble_sort(arr)
print(arr)

print("[11, 12, 22, 25, 34, 64, 90]")